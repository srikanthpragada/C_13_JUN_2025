// Program to take 10 chars and count how many are uppercase letters
// Date : 28-JUN-2025

#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main()
{
   char ch, i, count = 0;

      for(i = 1; i <= 10; i ++)
      {
        printf("\nEnter a char:");
        ch = getche();

        if(isupper(ch))
          count ++;
      }

      printf("\nCount = %d", count);
}
