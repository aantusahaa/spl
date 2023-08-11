#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    gets(str);

    printf("Original string: %s\n", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 65 && str[i] <= 90) {
            str[i] = str[i] + 32; // Convert uppercase to lowercase
        } else if (str[i] >= 97 && str[i] <= 122) {
            str[i] = str[i] - 32; // Convert lowercase to uppercase
        }
    }

    printf("Modified string: %s\n", str);

    return 0;
}
