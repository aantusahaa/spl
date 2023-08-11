#include<stdio.h>

// Inserting an element into an array
int main() {
    int i, j, n, element;
    int arr[20];

    printf("How many elements in the array? (Max 20)\n");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Which position do you want to insert the element?\n");
    scanf("%d", &j);

    if (j < 0 || j > n) {
        printf("Invalid position!\n");
        return 0;
    }

    printf("Enter the element to insert:\n");
    scanf("%d", &element);

    // Shift elements to the right from position j
    for (i = n - 1; i >= j; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the element at position j
    arr[j] = element;

    printf("Array after insertion:\n");
    for (i = 0; i < n + 1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
