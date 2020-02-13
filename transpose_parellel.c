#include <cilk/cilk.h>

void transpose_parellel(double** A, int n) {
  cilk_for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      double temp = A[i][j];
      A[i][j] = A[j][i];
      A[j][i] = temp;
    }
  }
}