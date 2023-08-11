/**
 * Problem: Print Left aligned, Right aligned, and Pyramid pattern
 */

#include <stdio.h>

void printLeftAlignedPyramid(int rows) {
  for (int i = 1; i <= rows; i++) {
    for (int j = 1; j <= i; j++) {
      printf("* ");
    }
    printf("\n");
  }
}

void printRightAlignedPyramid(int rows) {
  for (int i = 1; i <= rows; i++) {
    for (int j = 1; j <= rows - i; j++) {
      printf("  ");
    }
    for (int j = 1; j <= i; j++) {
      printf("* ");
    }
    printf("\n");
  }
}

void printCenterAlignedPyramid(int rows) {
  int spaces = rows - 1;
  for (int i = 1; i <= rows; i++) {
    for (int j = 1; j <= spaces; j++) {
      printf("  ");
    }
    spaces--;

    for (int j = 1; j <= 2 * i - 1; j++) {
      printf("* ");
    }
    printf("\n");
  }
}

int main() {
  int rows;

  printf("Enter the number of rows: ");
  scanf("%d", &rows);

  printf("Left Aligned Pyramid:\n");
  printLeftAlignedPyramid(rows);

  printf("\nRight Aligned Pyramid:\n");
  printRightAlignedPyramid(rows);

  printf("\nCenter Aligned Pyramid:\n");
  printCenterAlignedPyramid(rows);

  return 0;
}
