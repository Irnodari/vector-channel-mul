#ifndef MAT_H_
#define MAT_H_
#define BATCHSIZE 8
#define MAT_DIM 128

static float A_linear[BATCHSIZE][MAT_DIM][MAT_DIM];
static float B_linear[BATCHSIZE][MAT_DIM][MAT_DIM];
static float C_linear[BATCHSIZE][MAT_DIM][MAT_DIM];

static float A_packed[MAT_DIM][MAT_DIM][BATCHSIZE];
static float B_packed[MAT_DIM][MAT_DIM][BATCHSIZE];
static float C_packed[MAT_DIM][MAT_DIM][BATCHSIZE];
#endif
