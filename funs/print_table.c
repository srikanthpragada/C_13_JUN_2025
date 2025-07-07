// Program to create a function to take a number and print table
// Date : 07-JUL-2025

#include <stdio.h>
#include <string.h>


void print_table(int num)
{
 int i;

       for(i = 1; i <= 10; i ++)
       {
          printf("%3d * %2d = %5d\n", num, i, num * i);
       }
}

void main()
{

    print_table(25);
}
