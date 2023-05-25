/**
 * Problem: Take a positive integer number as input. Determine wether that
 * number is even or odd.
 * ----------------------------------------------
 * Input:
 * Enter a number: 1
 *
 * Output:
 * Entered number is odd
 * ----------------------------------------------
 * Input:
 * Enter a number: 6
 *
 * Output:
 * Entered number is even
 * ----------------------------------------------
 */

#include <stdio.h>

int main() {
  int num;

  printf("Enter a number: ");
  scanf("%d", &num);

  if (num % 2 == 0) {
    printf("Entered number is even\n");
  } else {
    printf("Entered number is odd\n");
  }

  return 0;
}