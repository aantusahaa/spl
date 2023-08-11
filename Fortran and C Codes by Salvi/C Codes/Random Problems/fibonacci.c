#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &n);

    int t1 = 0, t2 = 1;

    printf("Fibonacci series:\n");

    for (int i = 1; i <= n; i++) {
        printf("%d ", t1);

        int nt = t1 + t2;
        t1 = t2;
        t2 = nt;
    }

    printf("\n");

    return 0;
}
