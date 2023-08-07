/**
 * Problem: Get radius of a sphere and calculate its volume upto 2 decimal
 * places
 */

#include <stdio.h>

#define PI 3.14159

int main() {
  float r, volume;

  printf("Enter the radius of the sphere: ");
  scanf("%f", &r);

  volume = (4.0 / 3.0) * PI * r * r * r;

  printf("Volume of the sphere is %.2f\n", volume);
  return 0;
}
