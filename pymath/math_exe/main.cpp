#include <iostream>

#include <math/simple_ops.hpp>

int main(int argc, char **argv) {

    std::cout << square_cpp(2) << std::endl;

    std::cout << square_cuda(2) << std::endl;
    
    return 0;
}
