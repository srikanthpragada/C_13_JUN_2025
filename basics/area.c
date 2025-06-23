// Program to take radius and display area of a circle
// Date : 18-JUN-2025

#include <stdio.h>

void main()
{
 float radius,area;

  printf("Enter Radius:");
  scanf("%f",&radius);

  area=3.14*radius*radius;

  printf("Area of a circle with radius %.2f is %.2f", radius, area);
}
