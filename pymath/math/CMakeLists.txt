 
cmake_minimum_required(VERSION 3.1)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project(math VERSION 0.1.0)

# Sources
set(PROJECT_SOURCE_DIR "src")

# Headers
set(PROJECT_INCLUDE_DIR "include")

# CPP Sources
set(DEFAULT_SOURCES
        ${PROJECT_SOURCE_DIR}/simple_ops.cpp
        ${PROJECT_INCLUDE_DIR}/math/simple_ops.hpp
        ${PROJECT_INCLUDE_DIR}/math/cuda_ops.hpp
)

# Add math library
add_library(math_lib SHARED ${DEFAULT_SOURCES})

# CUDA Sources
include(CheckLanguage)
check_language(CUDA)

if (CMAKE_CUDA_COMPILER)
    message("CUDA is supported. Enabling CUDA sources.")
    enable_language(CUDA)
    add_definitions(-DUSE_CUDA)
    set(CMAKE_CUDA_STANDARD 11)
    set(CUDA_SOURCES
            # CUDA sources
            ${PROJECT_SOURCE_DIR}/cuda/simple_ops.cu
            ${PROJECT_INCLUDE_DIR}/math/cuda_ops.hpp
            )

else ()
    message("Could not find CUDA support. Disabling CUDA sources.")
endif ()

add_library(math_lib_cuda SHARED ${CUDA_SOURCES})

# Include directories for mat library
target_include_directories(math_lib PUBLIC ${PROJECT_INCLUDE_DIR})
target_include_directories(math_lib_cuda PUBLIC ${PROJECT_INCLUDE_DIR})
