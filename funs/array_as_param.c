// Program to create a function to take an array and fill it with zeros
// Date : 11-JUL-2025

#include <stdio.h>

void fill_numbers(int a[10])
{
  int i;

      for(i = 0; i <  10; i ++)
           a[i] = i + 1;
}

void main()
{
 int arr[10], i;

     fill_numbers(arr);

     for(i = 0; i <  10; i ++)
         printf("%d ", arr[i]);
}

