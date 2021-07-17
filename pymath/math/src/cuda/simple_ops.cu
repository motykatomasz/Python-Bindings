#include <cuda.h>
#include <cuda_runtime.h>
#include <cuda_runtime_api.h>

#include <math/cuda_ops.hpp>

__global__ void square(int* d_out, const int base){
    *d_out = base * base;
}

__global__ void cube(int* d_out, const int base){
    *d_out = base * base * base;
}

int square_cuda(int base) {
    int BYTES = sizeof(int);

    // Declare pointer to cude in and out memory
    int h_out;
    int* d_out;

    // Allocate memory on the GPU
    cudaMalloc((void**) &d_out, BYTES);

    // Start kernel
    square<<<1, 1>>>(d_out, base);

    // Copy the output data from device to host
    cudaMemcpy(&h_out, d_out, BYTES, cudaMemcpyDeviceToHost);

    // Free the device memory
    cudaFree(d_out);
    
    return h_out;
}

int cube_cuda(int base) {
    int BYTES = sizeof(int);

    // Declare pointer to cude in and out memory
    int h_out;
    int* d_out;

    // Allocate memory on the GPU
    cudaMalloc((void**) &d_out, BYTES);

    // Start kernel
    cube<<<1, 1>>>(d_out, base);

    // Copy the output data from device to host
    cudaMemcpy(&h_out, d_out, BYTES, cudaMemcpyDeviceToHost);

    // Free the device memory
    cudaFree(d_out);
    
    return h_out;
}