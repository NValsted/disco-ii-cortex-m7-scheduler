#!/bin/bash
set -e

if [ -d "${REPO_ROOT}/lib/lib_output/si" ]; then read -p "Rebuild dependencies? (y/n) " rebuild_dependencies; fi

cp -r /tmp-src/* ${REPO_ROOT}/src

if [[ $rebuild_dependencies != "n" ]]
then
    rm -rf ${REPO_ROOT}/lib/lib_output/si
    mkdir -p /${REPO_ROOT}/lib/lib_output/si

    mkdir -p ${REPO_ROOT}/lib/subprojects
    cp ${REPO_ROOT}/src/FreeRTOSConfig.h ${REPO_ROOT}/fsimx8mp-m7-sdk/rtos/freertos/freertos_kernel/include/FreeRTOSConfig.h
    if [[ ! -e ${REPO_ROOT}/lib/subprojects/picolibc ]]; then ln -s ${REPO_ROOT}/lib/picolibc ${REPO_ROOT}/lib/subprojects/picolibc; fi
    if [[ ! -e ${REPO_ROOT}/lib/subprojects/csp ]]; then ln -s ${REPO_ROOT}/lib/csp ${REPO_ROOT}/lib/subprojects/csp; fi
    if [[ ! -e ${REPO_ROOT}/lib/subprojects/param ]]; then ln -s ${REPO_ROOT}/lib/param ${REPO_ROOT}/lib/subprojects/param; fi
    if [[ ! -e ${REPO_ROOT}/lib/csp/freertos ]]; then ln -s ${REPO_ROOT}/fsimx8mp-m7-sdk/rtos/freertos/freertos_kernel ${REPO_ROOT}/lib/csp/freertos; fi

    # Apply temporary csp patch
    patch ${REPO_ROOT}/lib/csp/meson.build < ${REPO_ROOT}/lib/csp_meson.patch

    cd ${REPO_ROOT}/lib/
    rm -rf build
    meson setup \
        --prefix=${REPO_ROOT}/lib/lib_output/si build \
        --cross-file ${REPO_ROOT}/lib/cross-arm-none-eabi.txt
    ninja -C build
    ninja -C build install

    # Remove temporary csp patch
    patch -R ${REPO_ROOT}/lib/csp/meson.build < ${REPO_ROOT}/lib/csp_meson.patch
fi

# Build main project
cd ${REPO_ROOT}/src/armgcc

./build.sh

if [ -d "${REPO_ROOT}/bin/debug" ]; then rm -r ${REPO_ROOT}/bin/debug; fi
if [ -d "${REPO_ROOT}/bin/release" ]; then rm -r ${REPO_ROOT}/bin/release; fi

mv debug ${REPO_ROOT}/bin
mv release ${REPO_ROOT}/bin
