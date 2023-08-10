/**
 * Problem: Copy items of one array to another array
 */

#include <stdio.h>

#define size 5

int main() {
  int sourceArray[size] = {1, 2, 3, 4, 5};
  int destinationArray[size];  // Make sure destinationArray has enough space

  // Copy elements from sourceArray to destinationArray
  for (int i = 0; i < size; i++) {
    destinationArray[i] = sourceArray[i];
  }

  // Print the elements in destinationArray
  printf("Elements in destinationArray: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", destinationArray[i]);
  }

  return 0;
}
