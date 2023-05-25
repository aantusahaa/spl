/**
 * Problem: Take a floating number as mark. Determine the grade of that mark
 * based on following criteria:
 * From 80 and above -> A+
 * From 70 and below 80 -> A
 * From 60 and below 70 -> A-
 * From 50 and below 60 -> B
 * From 40 and below 50 -> C
 * From 00 and below 40 -> F
 * ----------------------------------------------
 * Input:
 * Enter mark: 70
 *
 * Output:
 * Grade is A
 * ----------------------------------------------
 * Input:
 * Enter mark: 12
 *
 * Output:
 * Grade is F
 * ----------------------------------------------
 */

#include <stdio.h>

int main() {
  float mark;

  printf("Enter mark: ");
  scanf("%f", &mark);

  if (mark >= 80) {
    printf("Grade is A+\n");
  } else if (mark >= 70) {
    printf("Grade is A\n");
  } else if (mark >= 60) {
    printf("Grade is A-\n");
  } else if (mark >= 50) {
    printf("Grade is B\n");
  } else if (mark >= 40) {
    printf("Grade is C\n");
  } else {
    printf("Grade is F\n");
  }

  return 0;
}