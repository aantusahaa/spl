/**
 * Problem: Check if a number is perfect or not.
 */

#include <stdio.h>

int isPerfectNumber(int num) {
  int sum = 0;
  for (int divisor = 1; divisor <= num / 2; divisor++) {
    if (num % divisor == 0) {
      sum += divisor;
    }
  }
  return sum == num;
}

int main() {
  int num;
  printf("Enter a positive integer: ");
  scanf("%d", &num);

  if (isPerfectNumber(num)) {
    printf("%d is a perfect number.\n", num);
  } else {
    printf("%d is not a perfect number.\n", num);
  }

  return 0;
}
