#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <time.h>
#include "lib.h"

int main(int argc, char* argv[]) {
  int n = 4;
  int printFlag = 1;

  if (argc > 1) {
    n = atoi(argv[1]);
    printFlag = 0;
  }
  if (argc > 2) {
    printFlag = atoi(argv[2]);
  }

  double* A[n];
  int i;
  for (i = 0; i < n; i++) {
    A[i] = (double*)malloc(sizeof(double) * n);
  }

  int j;
  double count = 0.0;
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      A[i][j] = count;
      count += 1.0;
    }
  }

  transpose_parellel(A, n);
}