#include <pybind11/pybind11.h>

#include <math/simple_ops.hpp>

namespace py = pybind11;

PYBIND11_MODULE(pymath, m){
    m.doc() = "pybind11 example math with CUDA plugin";

    m.def("square_cpp", &square_cpp, py::arg("base"), "A function which squares a number.");
    m.def("cube_cpp", &cube_cpp, py::arg("base"), "A function which cubes a number.");

    m.def("square_cuda", &square_cuda, py::arg("base"), "A function which squares a number on gpu.");
    m.def("cube_cuda", &cube_cuda, py::arg("base"), "A function which cubes a number on gpu.");
}