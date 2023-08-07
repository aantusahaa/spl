/**
 * Problem: Take a character and determine wether it is a vowel or consonant
 * neutral
 * ----------------------------------------------
 * Input:
 * Enter the character: a
 *
 * Output:
 * Vowel
 * ----------------------------------------------
 * Input:
 * Enter the character: d
 *
 * Output:
 * Consonant
 * ----------------------------------------------
 * Input:
 * Enter the character: A
 *
 * Output:
 * Vowel
 * ----------------------------------------------
 */

#include <stdio.h>

int main() {
  char ch;

  printf("Enter the character: ");
  scanf("%c", &ch);

  if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
      ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
    printf("Vowel\n");
  } else {
    printf("Consonant\n");
  }

  return 0;
}