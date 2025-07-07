// Program to create a function to print a line
// Date : 07-JUL-2025

#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

// User-defined function
void line(int len, char ch)
{
 int i;

       for(i = 1; i <= len; i ++)
       {
          putch(ch);
       }
}

void main()
{

       line(30, '*'); // call function

       printf("\nSrikanth Technologies\n");

       line(40, '-');


}
