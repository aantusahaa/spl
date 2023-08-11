#include <stdio.h>
#include <ctype.h>
//with library fns
int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    gets(str);

    printf("Original string: %s\n", str);

    for (i = 0; str[i] != '\0'; i++) {

        if (isupper(str[i])) {
            str[i] =str[i];
        } 
        else if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }

    printf("Modified string: %s\n", str);

    return 0;
}
