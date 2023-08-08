/**
 * Problem: Get following characteristics of a string from a user defined
 * function
 * 1. Length of the string
 * 2. Number of uppercase characters
 * 3. Number of lowercase characters
 * 4. Number of digits
 * 5. Number of blank spaces
 * 6. Number of non-alphanumeric characters
 */
#include <stdio.h>

void getStringCharacteristics(char *str) {
  int length = 0;
  int upperCount = 0;
  int lowerCount = 0;
  int digitCount = 0;
  int spaceCount = 0;
  int nonAlphaNumCount = 0;

  for (int i = 0; str[i] != '\n'; i++) {
    length++;

    char ch = str[i];

    if (ch >= 'A' && ch <= 'Z') {
      upperCount++;
    } else if (ch >= 'a' && ch <= 'z') {
      lowerCount++;
    } else if (ch >= '0' && ch <= '9') {
      digitCount++;
    } else if (ch == ' ') {
      spaceCount++;
    } else {
      nonAlphaNumCount++;
    }
  }
  printf("Length of the string: %d\n", length);
  printf("Number of uppercase characters: %d\n", upperCount);
  printf("Number of lowercase characters: %d\n", lowerCount);
  printf("Number of digits: %d\n", digitCount);
  printf("Number of blank spaces: %d\n", spaceCount);
  printf("Number of non-alphanumeric characters: %d\n", nonAlphaNumCount);
}

int main() {
  char str[100];

  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);

  getStringCharacteristics(str);

  return 0;
}
