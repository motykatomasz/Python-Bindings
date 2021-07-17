#include <iostream>

#include <math/simple_ops.hpp>

int main(int argc, char **argv) {

    // bool useGPU = argv[1]

    SimpleOps* math = new SimpleOps(true);

    std::cout << math->square(2) << std::endl;
    std::cout << math->cube(2) << std::endl;
    
    return 0;
}
