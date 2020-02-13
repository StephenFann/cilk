// typedef float el_t;
// typedef float vfloat_t __attribute__ ((vector_size (32)));

#include <stdio.h>

int fib(int n);

int fib_parellel(int n);

void transpose_parellel(double** A, int n);

void transpose(double** A, int n);
