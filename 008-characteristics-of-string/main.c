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

#include <ctype.h>
#include <stdio.h>
#include <string.h>

void getStringCharacteristics(char *str) {
  int length = strlen(str) - 1;
  int upperCount = 0;
  int lowerCount = 0;
  int digitCount = 0;
  int spaceCount = 0;
  int nonAlphaNumCount = 0;

  for (int i = 0; i < length; i++) {
    if (isupper(str[i])) {
      upperCount++;
    } else if (islower(str[i])) {
      lowerCount++;
    } else if (isdigit(str[i])) {
      digitCount++;
    } else if (isspace(str[i])) {
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
