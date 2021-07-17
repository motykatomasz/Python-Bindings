#include <math/simple_ops.hpp>
#include <math/cuda_ops.hpp>


int SimpleOps::square(int base) {
  if (this->gpu) {
      return square_cuda(base);
  } else {
      return this->square_cpu(base);
  }
}

int SimpleOps::cube(int base) {
  if (this->gpu) {
      return cube_cuda(base);
  } else {
      return this->cube_cpu(base);
  }
}

int SimpleOps::square_cpu(int base) {
    return base * base;
}

int SimpleOps::cube_cpu(int base) {
    return base * base * base;
}

void SimpleOps::cuda(bool c) {
    this->gpu = c;
}

