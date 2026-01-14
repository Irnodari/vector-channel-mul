#include "../include/scalar.h"

void matmul(float A[BATCHSIZE][MAT_DIM][MAT_DIM], float B[BATCHSIZE][MAT_DIM][MAT_DIM], float C[BATCHSIZE][MAT_DIM][MAT_DIM])
{

  for (int i = 0; i < BATCHSIZE; i+=1){
    for (int j = 0; j < MAT_DIM; j+=1){
      for (int k = 0; k < MAT_DIM; k+=1){
        for (int l = 0; l < MAT_DIM; l+=1){
          C[i][j][k] += A[i][j][l] * B[i][l][k];
        }
      }
    }
  }
}
