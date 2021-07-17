#pragma once

struct SimpleOps {
bool gpu;

explicit SimpleOps(bool gpu = false) : gpu(gpu) {};

int square(int base);
int cube(int base);

int square_cpu(int base);
int cube_cpu(int base);

void cuda(bool c);

};