#include <stdio.h>
int main() {
    int arr[100];
    int size, position, newValue;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to insert the new element: ");
    scanf("%d", &position);

    printf("Enter the new value to insert: ");
    scanf("%d", &newValue);

    // Shift elements to make space for the new element
    for (int i = size; i >= position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new value at the specified position
    arr[position - 1] = newValue;

    printf("Array after insertion:\n");
    for (int i = 0; i < size + 1; i++) {
        printf("%d ", arr[i]);
    }
return 0;
}
