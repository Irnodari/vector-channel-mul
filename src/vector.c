#include "../include/vector.h"
#include <x86intrin.h>

void vmatmul(float A[MAT_DIM][MAT_DIM][BATCHSIZE], float B[MAT_DIM][MAT_DIM][BATCHSIZE], float C[MAT_DIM][MAT_DIM][BATCHSIZE]){
  for (int i = 0; i < MAT_DIM; i+=1){
    for (int j = 0; j < MAT_DIM; j+=1){
      __m256 vc = _mm256_load_ps(C[i][j]);
      __m256 va, vb;
      for (int k = 0; k < MAT_DIM; k+=1){
        va = _mm256_load_ps(A[i][k]);
        vb = _mm256_load_ps(A[k][j]);
        vc = _mm256_fmadd_ps(va, vb, vc);
      }
      _mm256_storeu_ps(C[i][j], vc);
    }
  }
}
