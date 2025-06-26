// Program to take a number and displays smallest factor
// Date : 26-JUN-2025

#include <stdio.h>

void main()
{
  int num, i;

      printf("Enter a number :");
      scanf("%d", &num);

      for(i = 2; i <= num/2 ; i ++)
      {
         if(num % i == 0)
         {
             printf("Smallest Factor : %d", i);
             break;
         }
      }


}
