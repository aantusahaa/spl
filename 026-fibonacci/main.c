/**
 * Problem: Find n fibonacci numbers.
 */

#include <stdio.h>

int main() {
  int n;
  printf("Enter the number of terms: ");
  scanf("%d", &n);

  int first = 0, second = 1, next;

  printf("Fibonacci sequence: ");
  for (int i = 0; i < n; i++) {
    if (i <= 1)
      next = i;
    else {
      next = first + second;
      first = second;
      second = next;
    }
    printf("%d ", next);
  }
  printf("\n");

  return 0;
}
