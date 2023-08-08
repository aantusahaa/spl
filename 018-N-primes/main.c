/**
 * Problem: Take N values. Find how many of them are prime numbers.
 */
#include <stdbool.h>
#include <stdio.h>

bool is_prime(int num) {
  if (num <= 1) {
    return false;
  }

  for (int i = 2; i * i <= num; i++) {
    if (num % i == 0) {
      return false;
    }
  }

  return true;
}

int main() {
  int N;

  printf("Enter the number of values: ");
  scanf("%d", &N);

  int values[N];
  int primeCount = 0;

  printf("Enter %d values:\n", N);
  for (int i = 0; i < N; i++) {
    scanf("%d", &values[i]);
    if (is_prime(values[i])) {
      primeCount++;
    }
  }

  printf("Among the %d values, %d are prime numbers.\n", N, primeCount);

  return 0;
}
