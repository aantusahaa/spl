/**
 * Problem: Insert an element at a desired position in an array
 */

#include <stdio.h>

int main() {
  int size, position, newValue;

  printf("Enter the size of the array: ");
  scanf("%d", &size);

  int arr[size];

  printf("Enter the elements of the array:\n");
  for (int i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }

  printf("Enter the position to insert (0-indexed): ");
  scanf("%d", &position);

  printf("Enter the new value to insert: ");
  scanf("%d", &newValue);

  if (position < 0 || position > size) {
    printf("Invalid position\n");
    return 1;  // Exit with an error code
  }

  // Shift elements to the right to make space for the new element
  for (int i = size; i > position; i--) {
    arr[i] = arr[i - 1];
  }

  arr[position] = newValue;
  size++;

  printf("Array after insertion:\n");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
