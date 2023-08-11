/**
 * Problem: Sum and average of elements of an array
 */

#include <stdio.h>

int main() {
  int size;

  printf("Enter the size of the array: ");
  scanf("%d", &size);

  int arr[size];

  printf("Enter the elements of the array:\n");
  for (int i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }

  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += arr[i];
  }

  float average = (float)sum / size;

  printf("Sum of elements: %d\n", sum);
  printf("Average of elements: %.2f\n", average);

  return 0;
}
