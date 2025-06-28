// Program to take a char and display whether it is uppercase
// Date : 28-JUN-2025

#include <stdio.h>

void main()
{
   char ch;

       printf("Enter a char:");
       scanf("%c", &ch);

       if(ch >= 'A' && ch <= 'Z')
           printf("Uppercase");
       else
           printf("Not uppercase");



}
