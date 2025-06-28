// Program to take a char and display its type
// Date : 28-JUN-2025

#include <stdio.h>
#include <conio.h>

void main()
{
   char ch;

       printf("Enter a char:");
       ch = getche();

       if(ch >= 'A' && ch <= 'Z'  || ch >= 'a' && ch <= 'z')
           printf("\nAlpha");
       else
         if(ch >= 48 && ch <= 57)
            printf("\nDigit");
         else
            printf("\nSome other");

}
