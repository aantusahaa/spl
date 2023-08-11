#include<stdio.h>

// Deleting an array element using a single array
int main(){
    int i, j, n;
    int arr[20];

    printf("How many elements in the array? (Max 20)\n");
    scanf("%d", &n);

    printf("What are the elements?\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Which element position do you want to delete?\n");
    scanf("%d", &j);

    // Check if the position is within the valid range
    if(j < 0 || j >= n){
        printf("Invalid position!\n");
    }

    // Copy the elements before the deleted position
    for(i = 0; i < j; i++){
        arr[i] = arr[i];
    }

    // Shift the elements after the deleted position to the left
    for(i = j; i < n - 1; i++){
        arr[i] = arr[i + 1];
    }

    printf("Array after deletion:\n");
    for(i = 0; i < n - 1; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
