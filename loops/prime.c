// Program to take number and displays whether it is prime
// Date : 27-JUN-2025

#include <stdio.h>

void main()
{
  int num, prime = 1,  i;

      printf("Enter number :");
      scanf("%d", &num);

      for(i = 2; i <= num/2; i ++)
      {
         if(num % i == 0)
         {
             printf("Not Prime");
             prime = 0; // false
             break;
         }
      }

      if(prime)
         printf("Prime");



}
