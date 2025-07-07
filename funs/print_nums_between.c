// Program to create a function to print numbers between the given values
// Date : 07-JUL-2025

#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

// User-defined function
void print_numbers(int start, int end)
{
 int i;

       for(i = start; i <= end; i ++)
       {
          printf("%5d", i);
       }
}

void main()
{

   print_numbers(10,15);

}
