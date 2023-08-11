#include <stdio.h>
//A program which seperates odd an even numbers into different arrays

int main() {
    int arr[7] = {2, 5, 7, 10, 12, 15, 16},oddArr[7],evenArr[7];

    int oddCount = 0,evenCount = 0;

    for (int i = 0; i < 7; i++) {
        if (arr[i] % 2 == 0) {
            evenArr[evenCount] = arr[i];
            evenCount++;
        } 
    else {
            oddArr[oddCount] = arr[i];
            oddCount++;
        }
    }

    printf("Odd numbers: ");
    for (int i = 0; i < oddCount; i++) {
        printf("%d ", oddArr[i]);
    }

    printf("\nEven numbers: ");
    for (int i = 0; i < evenCount; i++) {
        printf("%d ", evenArr[i]);
    }

    return 0;
}