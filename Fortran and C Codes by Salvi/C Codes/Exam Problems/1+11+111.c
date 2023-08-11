#include <stdio.h>

int main() {
    int n;
    int term = 1; // Initial term
    int sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        sum += term;
        term = term * 10 + 1;
    }

    printf("Sum of the series: %d\n", sum);

    return 0;
}
