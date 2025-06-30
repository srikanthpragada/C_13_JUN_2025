// Program to create an array and fill it with values
// Date : 30-JUN-2025

#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main()
{
   int a[5], i;

      // Fill array with user's input
      for(i = 0; i < 5; i ++)
      {
          printf("Enter a number :");
          scanf("%d", &a[i]);
      }

      // Print array
      for(i = 0; i < 5; i ++)
      {
           printf("%d\n", a[i]);
      }


}
