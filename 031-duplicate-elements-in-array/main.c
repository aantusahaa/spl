/**
 * Problem: Find number of duplicate elements in an array (assume an element can
 * have only one duplicate)
 */

#include <stdio.h>

int main() {
  int size;
  printf("Enter the number of elements: ");
  scanf("%d", &size);

  int arr[size];
  printf("Enter the elements:\n");
  for (int i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }

  int count = 0;

  for (int i = 0; i < size - 1; i++) {
    for (int j = i + 1; j < size; j++) {
      if (arr[i] == arr[j]) {
        count++;
        break;  // Break the inner loop after finding a duplicate
      }
    }
  }

  printf("Total number of duplicate items: %d\n", count);

  return 0;
}
