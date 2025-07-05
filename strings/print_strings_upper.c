// Program to 5 strings and display the largest by length
// Date : 05-JUL-2025

#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

void main()
{
    char names[5][20];
    int i;


       for(i = 0; i < 5; i ++)
       {
          printf("Enter a name :");
          gets(names[i]);
       }

       for(i = 0; i < 5; i ++)
       {
           puts(strupr(names[i]));
       }


}
