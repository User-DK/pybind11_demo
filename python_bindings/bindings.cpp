#include "../include/pybind11_demo.hpp"
#include <pybind11/pybind11.h>

namespace py = pybind11;

PYBIND11_MODULE(pybind11_demo, m)
{
    m.doc() = "pybind11 demo plugin";

    m.def("add", &add, "A function that adds two numbers");
}