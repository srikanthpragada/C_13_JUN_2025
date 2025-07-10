// Program to create a function to take a parameter and set it to zero
// using pass by reference or address
// Date : 10-JUL-2025

#include <stdio.h>

void zero(int * p)
{
  *p = 0;
}

void main()
{
  int a = 100;

     zero(&a);
     printf("%d ",a);
}

