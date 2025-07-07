// Program to create a function to takes radius and return area
// Date : 07-JUL-2025

#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>


float calculate_area(float radius)
{
   return 3.14 * radius * radius;
}

void main()
{
 float area;

     area = calculate_area(12.5);
     printf("Area = %f", area);

}
