// Program to take a string and display it in reverse
// Date : 04-JUL-2025

#include <stdio.h>
#include <conio.h>

void main()
{
    char st[20];
    int i;

       printf("Enter a string :");
       gets(st);

       for(i = 0; st[i] != '\0'; i ++)
            ;

       for(i --; i >= 0; i --)
           putch(st[i]);



}
