/**
 * Problem: Take three integer numbers. Find the largest number among them
 * ----------------------------------------------
 * Input:
 * Enter three number: 5 10 9
 *
 * Output:
 * 10 is the largest
 * ----------------------------------------------
 * Input:
 * Enter three number: -5 -10 -9
 *
 * Output:
 * -5 is the largest
 * ----------------------------------------------
 */

#include <stdio.h>

int main() {
  int num1, num2, num3, largest;

  printf("Enter three number: ");
  scanf("%d %d %d", &num1, &num2, &num3);

  if (num1 > num2 && num1 > num3) {
    largest = num1;
  } else if (num2 > num1 && num2 > num3) {
    largest = num2;
  } else {
    largest = num3;
  }

  printf("%d is the largest\n", largest);

  return 0;
}