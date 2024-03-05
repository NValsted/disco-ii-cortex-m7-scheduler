project('si', 'c', default_options: [
    'c_std=gnu17', 
    'b_staticpic=false', 
    'default_library=static',
    'param:vmem_fram=true', 
    'param:list_dynamic=false',
    'picolibc:multilib=false',
    'csp:use_hmac=false'
])

libcsp = subproject('csp')
libcsp_dep = libcsp.get_variable('csp_dep')

libparam = subproject('param')
libparam_dep = libparam.get_variable('param_dep')

header_files_script = '''
import os
import sys

header_files = []
for root, dirs, files in os.walk(sys.argv[1]):
    for file in files:
        if file.endswith('.h'):
            rel_path = os.path.relpath(os.path.join(root, file), sys.argv[1])
            install_dir = os.path.dirname(rel_path) if os.path.dirname(rel_path) else '.'
            header_files.append((rel_path, install_dir))

print('\n'.join(['{} {}'.format(*h) for h in header_files]))
'''

csp_headers = run_command('/usr/bin/python3', '-c', header_files_script, 'csp/include', join_paths(get_option('includedir'), 'csp')).stdout().strip().split('\n')
param_headers = run_command('/usr/bin/python3', '-c', header_files_script, 'param/include', join_paths(get_option('includedir'), 'param')).stdout().strip().split('\n')

foreach h : csp_headers
    parts = h.split()
    install_data(join_paths('csp/include', parts[0]), install_dir: join_paths(get_option('includedir'), '', parts[1]))
endforeach

foreach h : param_headers
    parts = h.split()
    install_data(join_paths('param/include', parts[0]), install_dir: join_paths(get_option('includedir'), '', parts[1]))
endforeach

si_lib = static_library('si', [],
    dependencies: [libcsp_dep, libparam_dep],
    install: true
)
