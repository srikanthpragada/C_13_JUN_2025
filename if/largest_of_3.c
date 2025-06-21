// Program to take 3 numbers and display the largest
// Date : 21-JUN-2025

#include <stdio.h>

void main()
{
int a,b,c;

printf("Enter 3 numbers :");
scanf("%d%d%d", &a, &b, &c);


if (a > b && a > c)
{
    printf("The largest number is %d", a);
}
else
    if (b > c)
    {
      printf("The largest number is %d", b);
    }
    else
    {
      printf("The largest number is %d", c);
    }
}
