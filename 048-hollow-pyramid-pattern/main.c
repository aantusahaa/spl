/**
 * Problem: Print Hollow pyramid star pattern
 */

#include <stdio.h>

int main() {
  int rows;

  printf("Enter the number of rows: ");
  scanf("%d", &rows);

  for (int i = 1; i <= rows; i++) {
    for (int j = 1; j <= 2 * rows - 1; j++) {
      if (j >= rows - i + 1 && j <= rows + i - 1) {
        if (i == rows || j == rows - i + 1 || j == rows + i - 1)
          printf("*");
        else
          printf(" ");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }

  return 0;
}
