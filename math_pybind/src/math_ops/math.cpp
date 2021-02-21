#include <pybind11/pybind11.h>

#include "simple_ops.cpp"

namespace py = pybind11;

PYBIND11_MODULE(math, m){
    m.doc() = "pybind11 example math with CUDA plugin";

    m.def("square_cpp", &square_cpp, py::arg("base"), "A function which squares a number.");
    m.def("cube_cpp", &cube_cpp, py::arg("base"), "A function which cubes a number.");
}