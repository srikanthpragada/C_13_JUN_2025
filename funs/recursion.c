// Program to create a function that implements recursion
// Date : 11-JUL-2025

#include <stdio.h>

void reverse(int n)
{
    printf("%d ", n);
    if(n > 1)
        reverse(n - 1);  // recursion
}

void reverse2(int n)
{
  for( ; n > 0; n --)
      printf("%d ", n);
}

void main()
{
   reverse(5);
   reverse2(5);
}

