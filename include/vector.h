#ifndef VEC_H_
#define VEC_H_
#include "matrices.h"
#include <x86intrin.h>

void vmatmul(float A[MAT_DIM][MAT_DIM][BATCHSIZE], float B[MAT_DIM][MAT_DIM][BATCHSIZE], float C[MAT_DIM][MAT_DIM][BATCHSIZE]);
#endif
