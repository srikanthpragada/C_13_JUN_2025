// Program to take a string and count words
// Date : 03-JUL-2025

#include <stdio.h>
#include <ctype.h>
#include <conio.h>

void main()
{
    char st[20];
    int i, count = 1;

       printf("Enter a string :");
       gets(st);

       for(i = 0; st[i] != '\0'; i ++)
       {
           if(st[i] == ' ')  //  st[i] == 32
              count ++;
       }

       printf("Word count : %d", count);
}


