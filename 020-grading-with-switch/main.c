/**
 * Problem: Take marks and print the grade. But use switch statement.
 */

#include <stdio.h>

int main() {
  int marks;
  char *grade;

  printf("Enter your marks: ");
  scanf("%d", &marks);

  switch (marks / 10) {
    case 10:
    case 9:
    case 8:
      grade = "Honours";
      break;
    case 7:
    case 6:
      grade = "First Division";
      break;
    case 5:
      grade = "Second Division";
      break;
    case 4:
      grade = "Third Division";
      break;
    default:
      grade = "Fail";
  }

  printf("Your grade is: %s\n", grade);

  return 0;
}
