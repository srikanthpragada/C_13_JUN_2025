// Program to take a name and display only uppercase letters
// Date : 03-JUL-2025

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
           if(isupper(st[i]))
              putch(st[i]);
       }

}
