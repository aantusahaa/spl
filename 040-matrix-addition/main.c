/**
 * Problem: Find addition of two matrices
 */

#include <limits.h>
#include <stdio.h>

int main() {
  int rows, cols;

  printf("Enter the number of rows: ");
  scanf("%d", &rows);

  printf("Enter the number of columns: ");
  scanf("%d", &cols);

  int matrix1[rows][cols];
  int matrix2[rows][cols];
  int resultMatrix[rows][cols];

  // Input for matrix1
  printf("Enter elements for matrix1:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      scanf("%d", &matrix1[i][j]);
    }
  }

  // Input for matrix2
  printf("Enter elements for matrix2:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      scanf("%d", &matrix2[i][j]);
    }
  }

  // Addition of matrices
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      resultMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
    }
  }

  // Displaying the result matrix
  printf("Resultant matrix after addition:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%d ", resultMatrix[i][j]);
    }
    printf("\n");
  }

  return 0;
}
