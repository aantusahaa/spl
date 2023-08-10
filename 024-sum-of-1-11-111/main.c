/**
 * Problem: Find sum of 1 + 11 + 111 + ... upto n terms.
 */

#include <stdio.h>

int main() {
  int n;
  printf("Enter the number of terms: ");
  scanf("%d", &n);

  long int term = 1;
  long int sum = 0;

  for (int i = 0; i < n; i++) {
    sum += term;
    term = term * 10 + 1;
  }

  printf("Sum of the series: %ld\n", sum);

  return 0;
}
