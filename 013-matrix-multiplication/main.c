/**
 * Problem: Take matrix A and B with same dimensions (also a square matrix) and
 * find their product in a new matrix C.
 */
#include <stdio.h>

#define ROWS 3
#define COLS 3

void multiplication(int A[ROWS][COLS], int B[ROWS][COLS], int C[ROWS][COLS]) {
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      C[i][j] = 0;
      for (int k = 0; k < COLS; k++) {
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }
}

void read_matrix(int mat[ROWS][COLS], char *name) {
  printf("Enter matrix %s elements:\n", name);
  for (int i = 0; i < ROWS; i++) {
    printf("Row %d: ", i + 1);
    for (int j = 0; j < COLS; j++) {
      scanf("%d", &mat[i][j]);
    }
  }
}

void print_matrix(int mat[ROWS][COLS]) {
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      printf("%d\t", mat[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int A[ROWS][COLS];
  int B[ROWS][COLS];
  int C[ROWS][COLS];

  read_matrix(A, "A");
  read_matrix(B, "B");

  multiplication(A, B, C);

  printf("Matrix C (A * B):\n");
  print_matrix(C);

  return 0;
}
