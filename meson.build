project('pybind11_demo', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3','cpp_std=c++20'])

deps = []
args=[]           #add compiler args as needed

py = import('python').find_installation('python')
deps += py.dependency()

pyb11_dep = dependency('pybind11')
deps += pyb11_dep

#can use shared_module but not allows to give a specific name to the target .so  
py.extension_module(           
  'pybind11_demo',
  sources : [
    'python_bindings/bindings.cpp'
  ],
  dependencies: deps,
  cpp_args : args,
  install: true,
  subdir: 'op'
)

py.install_sources([
    'main/__init__.py',
  ],
  pure: false, # install next to compiled extension
  subdir: 'op'
)