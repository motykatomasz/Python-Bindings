add_executable(math_exe main.cpp)

target_link_libraries(math_exe PUBLIC math_lib)
target_link_libraries(math_exe PUBLIC math_lib_cuda)
