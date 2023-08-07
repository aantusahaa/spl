/**
 * Problem: Write a function to check if a string is a palindrome or not.
 */
#include <stdio.h>
#include <string.h>

void isPalindrome(char *str) {
  int length = strlen(str);
  int isPalindrome = 1;

  for (int i = 0; i < length / 2; i++) {
    if (str[i] != str[length - i - 2]) {
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
