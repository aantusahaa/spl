#include <stdio.h>

int main() {
    int num, count = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for (int i = 2; i < num; i++) {
        int isPrime = 1;
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            count++;
        }
    }

    printf("There are %d prime numbers before %d.\n", count, num);
    return 0;
}
