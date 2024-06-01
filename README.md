## Pybind11_demo

A demo repository showcasing use of meson(build), micromamba(package management), pytest, github actions(CI) along with pybind11 for python bindings for C++.

### Steps to install and compile the code

### Installation
```
micromamba create -f environment.yml
micromamba activate demoenv
```

### Compilation
```
meson setup build
meson compile -C build
```

### Python package
```
pip install .
```

### Run the test
```
pytest test
```

