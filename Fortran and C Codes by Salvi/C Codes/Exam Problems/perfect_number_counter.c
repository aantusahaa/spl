#include <stdio.h>

int main() {
    int i, j, n, sum, percount = 0;
    printf("Check how many perfect numbers up to: ");
    scanf("%d", &n);

    for (j = 1; j <= n; j++) {
        sum = 0;
        for (i = 1; i < j; i++) {

            if (j % i == 0) {
                sum += i;
            }
        }
        if (sum == j) {
            percount++;
        }
    }
    printf("There are %d perfect numbers up to %d\n", percount, n);
    return 0;
}

