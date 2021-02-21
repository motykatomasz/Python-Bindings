cmake_minimum_required(VERSION 3.11.0)

set(CMAKE_VERBOSE_MAKEFILE ON)

project(math)

set(SOURCE_DIR "src/math_ops")
include_directories(${SOURCE_DIR})

add_subdirectory(libs/pybind11)
pybind11_add_module(math ${SOURCES} "${SOURCE_DIR}/math.cpp")