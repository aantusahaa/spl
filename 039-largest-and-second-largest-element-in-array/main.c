/**
 * Problem: Find the largest and second largest element in an array
 */

#include <limits.h>
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

  // Initialize both to the smallest integer value
  int largest = INT_MIN, secondLargest = INT_MIN;

  for (int i = 0; i < size; i++) {
    if (arr[i] > largest) {
      secondLargest = largest;  // Update the second largest
      largest = arr[i];         // Update the largest
    } else if (arr[i] > secondLargest && arr[i] < largest) {
      secondLargest = arr[i];  // Update the second largest
    }
  }

  printf("Largest element: %d\n", largest);
  printf("Second largest element: %d\n", secondLargest);

  return 0;
}
