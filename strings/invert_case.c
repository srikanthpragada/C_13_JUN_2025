// Program to take a string and display after inverting the case
// Date : 04-JUL-2025

#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main()
{
    char st[20];
    int i;

       printf("Enter a string :");
       gets(st);

       for(i = 0; st[i] != '\0'; i ++)
       {
           if(isupper(st[i]))
               putch(tolower(st[i]));
           else
               putch(toupper(st[i]));
       }

}
