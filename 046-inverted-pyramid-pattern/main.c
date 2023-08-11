/**
 * Problem: Print Left aligned, Right aligned, and Pyramid pattern but inverted
 */

#include <stdio.h>

void printLeftAlignedInvertedPyramid(int rows) {
  for (int i = rows; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
      printf("* ");
    }
    printf("\n");
  }
}

void printRightAlignedInvertedPyramid(int rows) {
  for (int i = rows; i >= 1; i--) {
    for (int j = 1; j <= rows - i; j++) {
      printf("  ");
    }
    for (int j = 1; j <= i; j++) {
      printf("* ");
    }
    printf("\n");
  }
}

void printCenterAlignedInvertedPyramid(int rows) {
  int spaces = 0;
  for (int i = rows; i >= 1; i--) {
    for (int j = 1; j <= spaces; j++) {
      printf("  ");
    }
    spaces++;

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

  printf("Left Aligned Inverted Pyramid:\n");
  printLeftAlignedInvertedPyramid(rows);

  printf("\nRight Aligned Inverted Pyramid:\n");
  printRightAlignedInvertedPyramid(rows);

  printf("\nCenter Aligned Inverted Pyramid:\n");
  printCenterAlignedInvertedPyramid(rows);

  return 0;
}
