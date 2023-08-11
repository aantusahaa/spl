#include <stdio.h>

int main() {
    int n, num = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print numbers
        for (int j = 1; j <= i; j++) {
            printf(" %d", num);
            num++;
        }

        printf("\n");
    }

    return 0;
}
