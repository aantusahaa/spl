/**
 * Problem: Take an integer number. Determine wether it is positive, negative or
 * neutral
 * ----------------------------------------------
 * Input:
 * Enter the number: -5
 *
 * Output:
 * Number is negative
 * ----------------------------------------------
 * Input:
 * Enter the number: 5
 *
 * Output:
 * Number is positive
 * ----------------------------------------------
 * Input:
 * Enter the number: 0
 *
 * Output:
 * Number is neutral
 * ----------------------------------------------
 */

#include <stdio.h>

int main() {
  int num;

  printf("Enter the number: ");
  scanf("%d", &num);

  if (num > 0) {
    printf("Number is positive\n");
  } else if (num < 0) {
    printf("Number is negative\n");
  } else {
    printf("Number is neutral\n");
  }

  return 0;
}