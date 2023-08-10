/**
 * Problem: Find number of duplicate elements in an array (assume an element can
 * have multiple duplicate)
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

  int count = 0;

  for (int i = 0; i < size; i++) {
    int isDuplicate = 0;
    for (int j = 0; j < i; j++) {
      if (arr[i] == arr[j]) {
        isDuplicate = 1;
        break;
      }
    }
    if (!isDuplicate) {
      for (int j = i + 1; j < size; j++) {
        if (arr[i] == arr[j]) {
          count++;
          break;
        }
      }
    }
  }

  printf("Total number of duplicate items: %d\n", count);

  return 0;
}
