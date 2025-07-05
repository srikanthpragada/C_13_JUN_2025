// Program to take a string and print each word on a separate line
// Date : 05-JUL-2025

#include <stdio.h>
#include <ctype.h>
#include <conio.h>

void main()
{
    char st[20];
    int i;

       printf("Enter a string :");
       gets(st);

       for(i = 0; st[i] != '\0'; i ++)
       {
           if(st[i] == ' ')
              putch('\n');
           else
              putch(st[i]);

       }


}


