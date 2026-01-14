#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include "../include/matrices.h"
#include "../include/scalar.h"
#include "../include/vector.h"

int main(void){
  memset(C_linear, 0, BATCHSIZE*MAT_DIM*MAT_DIM*sizeof(float));
  memset(C_packed, 0, BATCHSIZE*MAT_DIM*MAT_DIM*sizeof(float));
  for (int i = 0; i < MAT_DIM; i+=1){
    for (int j = 0; j < MAT_DIM; j+=1){
      for (int k = 0; k < BATCHSIZE; k+=1){
        A_linear[i][j][k] = A_packed[j][k][i] = (float)rand();
        B_linear[i][j][k] = B_packed[j][k][i] = (float)rand();
      }
    }
  }
  clock_t start_lin, end_lin, start_pac, end_pac;
  start_lin = clock();
  matmul(A_linear, B_linear, C_linear);
  end_lin = clock();
  start_pac = clock();
  vmatmul(A_packed, B_packed, C_packed);
  end_pac = clock();
  printf("Packed Time: %fs\nUnpacked Time: %fs\n", (end_pac-start_pac)*1.0/CLOCKS_PER_SEC, (end_lin-start_lin) * 1.0/ CLOCKS_PER_SEC);
}
