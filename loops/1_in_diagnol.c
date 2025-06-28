// Program to print a matrix with 1 in diagnol cells and 0 otherwise
// Date : 28-JUN-2025

#include <stdio.h>

void main()
{
  int i, j;


      for(i = 1; i <= 5; i ++)
      {
         for (j = 1; j <= 5; j ++)
         {
             if(i == j)
                 printf(" 1 ");
             else
                 printf(" 0 ");

         }

         printf("\n");
      }

}
