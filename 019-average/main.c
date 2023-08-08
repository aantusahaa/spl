/**
 * Problem: Take N values. Find their average.
 */

#include <stdio.h>

int main() {
  int N;

  printf("Enter the number of values: ");
  scanf("%d", &N);

  int values[N];
  int sum = 0;

  printf("Enter %d values:\n", N);
  for (int i = 0; i < N; i++) {
    scanf("%d", &values[i]);
    sum += values[i];
  }

  double average = (double)sum / N;

  printf("Average of the %d values: %.2lf\n", N, average);

  return 0;
}
