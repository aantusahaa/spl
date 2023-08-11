/**
 * Problem: Remove an element at a position in an array
 */

#include <stdio.h>

int main() {
  int size, position;

  printf("Enter the size of the array: ");
  scanf("%d", &size);

  int arr[size];

  printf("Enter the elements of the array:\n");
  for (int i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }

  printf("Enter the position to remove (0-indexed): ");
  scanf("%d", &position);

  if (position < 0 || position >= size) {
    printf("Invalid position\n");
    return 1;  // Exit with an error code
  }

  // Shift elements to the left to fill the gap left by the removed element
  for (int i = position; i < size - 1; i++) {
    arr[i] = arr[i + 1];
  }

  size--;

  printf("Array after removing element:\n");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
