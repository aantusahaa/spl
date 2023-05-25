/**
 * Problem: Take a positive integer. Determine wether that number is a prime or
 * not.
 * ----------------------------------------------
 * Input:
 * Enter a positive integer: 3
 *
 * Output:
 * 3 is a prime number
 * ----------------------------------------------
 * Input:
 * Enter a positive integer: 12
 *
 * Output:
 * 12 is not a prime number
 * ----------------------------------------------
 * Input:
 * Enter a positive integer: 1
 *
 * Output:
 * 1 is not a prime number
 * ----------------------------------------------
 */

#include <stdio.h>

int main() {
  int num;
  int isPrime = 1;  // Assume the number is prime initially

  printf("Enter a positive integer: ");
  scanf("%d", &num);

  if (num <= 1) {
    isPrime = 0;  // 0 and 1 are not prime numbers
  } else {
    for (int i = 2; i <= num / 2; i++) {
      if (num % i == 0) {
        isPrime = 0;
        break;
      }
    }
  }

  if (isPrime) {
    printf("%d is a prime number\n", num);
  } else {
    printf("%d is not a prime number\n", num);
  }

  return 0;
}
