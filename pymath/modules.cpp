#include <pybind11/pybind11.h>

#include <math/simple_ops.hpp>

namespace py = pybind11;

PYBIND11_MODULE(pymath, m) {
    py::class_<SimpleOps>(m, "SimpleOps")
        .def(py::init<bool>())
        .def("square", &SimpleOps::square)
        .def("cube", &SimpleOps::cube);
}