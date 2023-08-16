/**
 * Problem: Input two strings variables str1[] and str2[]. Join them together in
 * a new string variable str[].
 */

#include <stdio.h>
#include <string.h>

void concatenateStrings(char *dest, char *src) {
  int i, j;
  i = strlen(dest);

  // Append src to dest
  for (j = 0; src[j] != '\0'; j++) {
    dest[i + j] = src[j];
  }
  dest[i + j] = '\0';  // Add null terminator
}

int main() {
  char str1[100], str2[100];
  char concatenatedStr[200];

  printf("Enter the first string: ");
  scanf("%s", str1);

  printf("Enter the second string: ");
  scanf("%s", str2);

  concatenateStrings(concatenatedStr, str1);
  concatenateStrings(concatenatedStr, str2);

  printf("Concatenated string: %s\n", concatenatedStr);

  return 0;
}
