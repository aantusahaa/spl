/**
 * Problem: Transform to upper triangular matrix
 */

#include <stdio.h>
int main() {
  int size;

  printf("Enter the dimension of the matrix: ");
  scanf("%d", &size);

  int matrix[size][size];

  printf("Enter the elements of the %dx%d matrix:\n", size, size);
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }

  // Convert the matrix to an upper triangular matrix
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (i > j)
        matrix[i][j] = 0;  // Set elements below the main diagonal to zero
    }
  }

  // Print the upper triangular matrix
  printf("Upper Triangular Matrix:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }
  return 0;
}