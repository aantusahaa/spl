/**
 * Problem: Remove an specific element from array
 */

#include <stdio.h>

int main() {
  int size, elementToRemove;

  printf("Enter the size of the array: ");
  scanf("%d", &size);

  int arr[size];

  printf("Enter the elements of the array:\n");
  for (int i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }

  printf("Enter the element to remove: ");
  scanf("%d", &elementToRemove);

  int found = 0;  // Flag to track if the element was found

  // Find the index of the element to remove
  for (int i = 0; i < size; i++) {
    if (arr[i] == elementToRemove) {
      found = 1;
      // Shift elements to the left to fill the gap left by the removed element
      for (int j = i; j < size - 1; j++) {
        arr[j] = arr[j + 1];
      }
      size--;
      break;  // Break the loop after removing the element
    }
  }

  if (found) {
    printf("Array after removing element:\n");
    for (int i = 0; i < size; i++) {
      printf("%d ", arr[i]);
    }
    printf("\n");
  } else {
    printf("Element not found in the array.\n");
  }

  return 0;
}
