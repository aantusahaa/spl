/**
 * Problem: Find the largest element in an array
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

  int largest = arr[0];  // Assume the first element is the largest

  for (int i = 1; i < size; i++) {
    if (arr[i] > largest) {
      largest = arr[i];
    }
  }

  printf("Largest element: %d\n", largest);

  return 0;
}
