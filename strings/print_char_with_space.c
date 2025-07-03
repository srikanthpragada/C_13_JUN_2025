// Program to take a string and print each char with space
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
          printf("%c ", st[i]);

          //putch(st[i]);
          //putch(' ');
       }


}


