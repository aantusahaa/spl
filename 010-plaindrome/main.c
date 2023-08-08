/**
 * Problem: Write a function to check if a string is a palindrome or not.
 */
#include <ctype.h>
#include <stdio.h>
#include <string.h>

void isPalindrome(char *str) {
  int length = strlen(str) - 1;
  int isPalindrome = 1;

  for (int i = 0; i < length / 2; i++) {
    char left = tolower(str[i]);
    char right = tolower(str[length - i - 1]);

    if (left != right) {
      isPalindrome = 0;
      break;
    }
  }

  if (isPalindrome) {
    printf("Palindrome\n");
  } else {
    printf("Not a palindrome\n");
  }
}

int main() {
  char str[100];

  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);

  isPalindrome(str);

  return 0;
}
