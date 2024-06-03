## Pybind11_demo
This is a demo repository that showcases the use of several tools:

- `Meson` for the build process
- `Micromamba` for package management
- `Pytest` for testing
- `GitHub Actions` for continuous integration (CI)
- `Pybind11` for creating Python bindings for C++ code

### Steps to Install and Compile the code

### Installation
Create a new `micromamba` environment and activate it:
```bash
micromamba create -f environment.yml
micromamba activate demoenv
```

### Build
Set up the build directory with `meson`:
```bash
meson setup build
```

### Install Python package
Use `pip` to install the package:
```bash
pip install .
```

### Run the tests
Use `pytest` to run the tests:
```bash
pytest tests
```

<!-- ### Hope you got everything right! -->
### Understanding the Project Structure
The project has the following structure:

 ```
├── environment.yml
├── include
│   └── pybind11_demo.hpp
├── python_bindings
│   └── bindings.cpp
├── meson.build
├── pyproject.toml
├── pybind11_demo
│   └── __init__.py
├── tests
│   └── test_add.py
├── README.md
└── LICENSE.txt
```

Here's what each file and directory does:
- `environment.yml`: This is the configuration file for creating the micromamba environment. It lists all the dependencies for our project.
- `include/`: This directory contains the `pybind11_demo.hpp` file, which is a C++ header file that defines the add function.
- `python_bindings/`: This directory contains the `bindings.cpp` file, which provides Python bindings for our C++ code.
- `meson.build`: This file configures meson, our build system.
- `pyproject.toml`: This file contains metadata about our Python package and configures the build system.
- `pybind11_demo/`: This directory is a Python package. It contains the `__init__.py` file, which Python uses to recognize this directory as a package.
- `tests/`: This directory contains our test cases, which can be run with pytest.
- `README.md`: This is the file you're reading now!
- `LICENSE.txt`: This file contains the license for our project.

```bash
- Thanks!!
```
