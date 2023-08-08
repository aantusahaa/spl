/**
 * Problem: Separate odd and even integers in separate array
 */
#include <stdio.h>

int main() {
  int n;

  printf("Enter the number of integers: ");
  scanf("%d", &n);

  int inputArray[n];
  int evenArray[n], oddArray[n];
  int evenCount = 0, oddCount = 0;

  printf("Enter %d integers:\n", n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &inputArray[i]);

    if (inputArray[i] % 2 == 0) {
      evenArray[evenCount] = inputArray[i];
      evenCount++;
    } else {
      oddArray[oddCount] = inputArray[i];
      oddCount++;
    }
  }

  printf("\nEven integers: ");
  for (int i = 0; i < evenCount; i++) {
    printf("%d ", evenArray[i]);
  }

  printf("\nOdd integers: ");
  for (int i = 0; i < oddCount; i++) {
    printf("%d ", oddArray[i]);
  }

  return 0;
}
