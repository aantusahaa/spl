#include <stdio.h>

int main() {
    int i, j, k;
    int a[3][3], b[3][3], c[3][3];

    printf("Enter values for the first matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter values for the second matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Matrix multiplication
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            c[i][j] = 0; // Initialize the element to 0 before summation
            for (k = 0; k < 3; k++) {
                c[i][j] =c[i][j]+ a[i][k] * b[k][j];
            }
        }
    }

    printf("The multiplied matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
