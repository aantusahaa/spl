/**
 * Problem: Find sum of n even natural numbers.
 */

#include <stdio.h>

int main() {
  int n;
  printf("Enter the value of n: ");
  scanf("%d", &n);

  int sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += 2 * i;  // Even natural numbers are multiples of 2
  }

  printf("Sum of the first %d even natural numbers: %d\n", n, sum);

  return 0;
}
