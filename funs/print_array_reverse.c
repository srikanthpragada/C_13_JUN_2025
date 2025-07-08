// Program to create a function to take an array and print it in reverse
// Date : 08-JUL-2025

#include <stdio.h>
#include <string.h>


void print_reverse(int a[10])
{
 int i;

       for(i = 9; i >= 0 ; i --)
       {
          printf("%5d", a[i]);
       }
}

void main()
{

 int arr[] = {1, 10, 20, 5, 6, 8, 9, 10, 29, 33};

     print_reverse(arr);
}

