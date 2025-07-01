// Program to validate password
// Date : 01-JUL-2025

#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main()
{
   char ch, i, upper = 0, digit = 0;


      printf("Enter Password :");
      for(i = 1; i <= 8; i ++)
      {
          ch = getch();
          putch('*');

          if(isdigit(ch))
              digit = 1;
          else
            if(isupper(ch))
               upper = 1;
      }

      if(upper && digit)
         printf("\nValid Password");
      else
        printf("\nInvalid Password");


}
