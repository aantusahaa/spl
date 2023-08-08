/**
 * Problem: Calculate area and perimeter of a rectangle
 */
#include <stdio.h>

int main() {
  double length, width;

  printf("Enter the length of the rectangle: ");
  scanf("%lf", &length);

  printf("Enter the width of the rectangle: ");
  scanf("%lf", &width);

  double perimeter = 2 * (length + width);
  double area = length * width;

  printf("Perimeter of the rectangle: %.2lf\n", perimeter);
  printf("Area of the rectangle: %.2lf\n", area);

  return 0;
}
