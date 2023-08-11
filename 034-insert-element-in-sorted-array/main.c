/**
 * Problem: Insert an element in a sorted array
 */

#include <stdio.h>

int main() {
  int size;
  printf("Enter the size of the sorted array: ");
  scanf("%d", &size);

  int arr[size];
  printf("Enter the elements of the sorted array:\n");
  for (int i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }

  int newValue;
  printf("Enter the new value to insert: ");
  scanf("%d", &newValue);

  int i = size - 1;

  // Find the correct position for the new value
  while (i >= 0 && arr[i] > newValue) {
    arr[i + 1] = arr[i];
    i--;
  }

  arr[i + 1] = newValue;
  size++;

  printf("Sorted array after inserting %d:\n", newValue);
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
