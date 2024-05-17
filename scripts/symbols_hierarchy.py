import re
import subprocess
from collections import defaultdict
from dataclasses import dataclass
from enum import Enum
from pathlib import Path

import plotly.graph_objects as go
import plotly.io as pio

ROOT_DIR = Path(__file__).resolve().parent.parent
DATA_DIR = Path(__file__).resolve().parent / "data"
OBJECT_FILE_DETECT_RE = re.compile(r"(\S+\.o)")


class SymbolType(Enum):
    text_global = "T"
    text_local = "t"
    weak = "W"
    data_global = "D"
    data_local = "d"
    bss_global = "B"
    bss_local = "b"
    rodata_global = "R"
    rodata_local = "r"


@dataclass
class SymbolNode:
    address: int
    size: int
    symbol_type: str
    name: str


@dataclass
class HierarchyNode:
    label: str
    parent: "HierarchyNode"
    size: int


def strip_file_path_prefix(file_path: str):
    file_path = file_path.replace(
        "CMakeFiles/disco_scheduler.elf.dir/disco-ii-cortex-m7-scheduler/", ""
    )
    file_path = file_path.replace(
        "/usr/local/arm/gcc-arm-none-eabi-10.3-2021.10/bin/..", ""
    )
    file_path = file_path.replace(
        "/lib/gcc/arm-none-eabi/10.3.1/../../../../", "/lib/gcc"
    )
    file_path = file_path.replace("/lib/gcc", "gcc/")
    file_path = file_path.replace("gcc//", "gcc/")

    return file_path


def build_hierarchy(
    permitted_symbol_types: list,
    symbols_file: Path,
    map_file: Path,
) -> dict[str, HierarchyNode]:
    file_symbol_map = defaultdict(list)

    with symbols_file.open("r") as f:
        for line in f:
            address, size, symbol_type, name = line.split()
            if symbol_type not in permitted_symbol_types:
                continue
            grep_command = f"grep -r -A 3 {name} {map_file}"
            grep_result = subprocess.run(
                grep_command, shell=True, capture_output=True, text=True
            )
            if grep_result.returncode == 0:
                if OBJECT_FILE_DETECT_RE.search(grep_result.stdout[:10]):
                    grep_result.stdout = grep_result.stdout[6:]
                re_result = OBJECT_FILE_DETECT_RE.search(grep_result.stdout)
                if re_result:
                    object_file = strip_file_path_prefix(re_result.group(1))
                    file_symbol_map[object_file].append(
                        SymbolNode(
                            address=int(address, 16),
                            size=int(size, 16),
                            symbol_type=symbol_type,
                            name=name,
                        )
                    )

    hierarchy_nodes = dict()
    for file, symbols in file_symbol_map.items():
        for symbol in symbols:
            hierarchy_nodes[symbol.name] = HierarchyNode(symbol.name, file, symbol.size)

        prev_file = file
        for part in reversed(file.split("/")):
            if part == "":
                continue
            file_remaining, _ = prev_file.rsplit(part, 1)
            if file_remaining != "" and file_remaining[-1] == "/":
                file_remaining = file_remaining[:-1]

            if prev_file not in hierarchy_nodes:
                hierarchy_nodes[prev_file] = HierarchyNode(
                    prev_file,
                    file_remaining,  # type: ignore
                    0,
                )
            prev_file = file_remaining

    processing_flag = True
    while processing_flag:
        processing_flag = False
        for node in hierarchy_nodes:
            children = [n for n in hierarchy_nodes if hierarchy_nodes[n].parent == node]
            if len(children) == 1:
                hierarchy_nodes[children[0]].parent = hierarchy_nodes[node].parent
                processing_flag = True

    return hierarchy_nodes


def create_treemap(hierarchy_nodes):
    labels = []
    parents = []
    values = []

    for node in hierarchy_nodes.values():
        labels.append(node.label)
        parents.append(node.parent)
        values.append(node.size)

    fig = go.Figure(
        go.Treemap(
            labels=labels,
            parents=parents,
            values=values,
        )
    )

    return fig


if __name__ == "__main__":
    # ITCM (csp_proc):
    hierarchy_nodes = build_hierarchy(
        permitted_symbol_types=[
            SymbolType.text_global.value,
            SymbolType.text_local.value,
            SymbolType.weak.value,
        ],
        symbols_file=DATA_DIR / "disco_scheduler-csp-proc.symbols",
        map_file=DATA_DIR / "disco_scheduler-csp-proc.map",
    )

    fig = create_treemap(hierarchy_nodes)
    fig.update_layout(
        title="ITCM Symbols Hierarchy (`csp_proc` variant) - "
        f"total size: {sum(node.size for node in hierarchy_nodes.values())} bytes",
        title_font=dict(size=24),
    )
    pio.write_html(
        fig, str(ROOT_DIR / "scripts" / "docs" / "itcm_symbols_hierarchy.html")
    )

    # DTCM (csp_proc):
    hierarchy_nodes = build_hierarchy(
        permitted_symbol_types=[
            SymbolType.data_global.value,
            SymbolType.data_local.value,
            SymbolType.bss_global.value,
            SymbolType.bss_local.value,
            SymbolType.rodata_global.value,
            SymbolType.rodata_local.value,
        ],
        symbols_file=DATA_DIR / "disco_scheduler-csp-proc.symbols",
        map_file=DATA_DIR / "disco_scheduler-csp-proc.map",
    )
    fig = create_treemap(hierarchy_nodes)
    fig.update_layout(
        title="DTCM Symbols Hierarchy (`csp_proc` variant) - "
        f"total size: {sum(node.size for node in hierarchy_nodes.values())} bytes",
        title_font=dict(size=24),
    )
    pio.write_html(
        fig, str(ROOT_DIR / "scripts" / "docs" / "dtcm_symbols_hierarchy.html")
    )

    # ITCM (lua):
    hierarchy_nodes = build_hierarchy(
        permitted_symbol_types=[
            SymbolType.text_global.value,
            SymbolType.text_local.value,
            SymbolType.weak.value,
        ],
        symbols_file=DATA_DIR / "disco_scheduler-lua.symbols",
        map_file=DATA_DIR / "disco_scheduler-lua.map",
    )
    fig = create_treemap(hierarchy_nodes)
    fig.update_layout(
        title="ITCM Symbols Hierarchy (lua variant) - "
        f"total size: {sum(node.size for node in hierarchy_nodes.values())} bytes",
        title_font=dict(size=24),
    )
    pio.write_html(
        fig, str(ROOT_DIR / "scripts" / "docs" / "itcm_lua_symbols_hierarchy.html")
    )

    # DTCM (lua):
    hierarchy_nodes = build_hierarchy(
        permitted_symbol_types=[
            SymbolType.data_global.value,
            SymbolType.data_local.value,
            SymbolType.bss_global.value,
            SymbolType.bss_local.value,
            SymbolType.rodata_global.value,
            SymbolType.rodata_local.value,
        ],
        symbols_file=DATA_DIR / "disco_scheduler-lua.symbols",
        map_file=DATA_DIR / "disco_scheduler-lua.map",
    )
    fig = create_treemap(hierarchy_nodes)
    fig.update_layout(
        title="DTCM Symbols Hierarchy (lua variant) - "
        f"total size: {sum(node.size for node in hierarchy_nodes.values())} bytes",
        title_font=dict(size=24),
    )
    pio.write_html(
        fig, str(ROOT_DIR / "scripts" / "docs" / "dtcm_lua_symbols_hierarchy.html")
    )
