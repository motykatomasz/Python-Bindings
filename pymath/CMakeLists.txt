cmake_minimum_required(VERSION 3.11.0)

project(my_project LANGUAGES CXX)

add_subdirectory(math)
add_subdirectory(math_exe)

add_subdirectory(libs/pybind11)

pybind11_add_module(pymath modules.cpp)
target_link_libraries(pymath PUBLIC math_lib)
target_link_libraries(pymath PUBLIC math_lib_cuda)