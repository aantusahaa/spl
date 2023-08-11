/**
 * Problem: Print Diamond Pattern
 */

#include <stdio.h>

void printDiamond(int rows) {
  for (int i = 1; i <= rows; i++) {
    for (int j = 1; j <= rows - i; j++) {
      printf(" ");
    }
    for (int j = 1; j <= 2 * i - 1; j++) {
      printf("*");
    }
    printf("\n");
  }

  for (int i = rows - 1; i >= 1; i--) {
    for (int j = 1; j <= rows - i; j++) {
      printf(" ");
    }
    for (int j = 1; j <= 2 * i - 1; j++) {
      printf("*");
    }
    printf("\n");
  }
}

int main() {
  int rows;

  printf("Enter the number of rows: ");
  scanf("%d", &rows);

  printDiamond(rows);

  return 0;
}
