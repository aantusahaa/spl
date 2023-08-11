#include <stdio.h>
#include <string.h>
#include <ctype.h>

void stringprop(char *s) {
    int len = strlen(s);
    int upp = 0, low = 0, digit = 0, blank = 0, non = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (isupper(s[i])) upp++;
        else if (islower(s[i])) low++;
        else if (isdigit(s[i])) digit++;
        else if (isspace(s[i])) blank++;
        else non++;
    }

    printf("Length: %d\n", len);
    printf("Uppercase: %d\n", upp);
    printf("Lowercase: %d\n", low);
    printf("Digits: %d\n", digit);
    printf("Blank spaces: %d\n", blank);
    printf("Non-alphanumeric: %d\n", non);

}

int main() {
    char s[100];
    printf("Input a string: ");
    fgets(s, sizeof(s), stdin);

    stringprop(s);

    return 0;
}
