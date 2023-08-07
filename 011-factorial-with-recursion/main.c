/**
 * Problem: Find factorial of a number using recursion
 */
#include <stdio.h>

int factorial(int n) {
  if (n == 0) return 1;

  return n * factorial(n - 1);
}

int main() {
  int num;

  printf("Enter a number to find factorial: ");
  scanf("%d", &num);

  printf("Factorial of %d is %d\n", num, factorial(num));

  return 0;
}
