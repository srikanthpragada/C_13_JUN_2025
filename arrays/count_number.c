// Program to create an array and fill it with values and then count how many times a value occurs
// Date : 01-JUL-2025

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
   int a[10], n, i, count = 0;

      srand(time(0));
      for(i = 0; i < 10; i ++)
      {
          a[i] = rand() % 100;
          printf("%5d", a[i]);
      }

      printf("\nEnter a number :");
      scanf("%d", &n);

      for(i = 0; i < 10; i ++)
      {
          if (a[i] == n)
              count ++;
      }


      printf("\nCount = %d", count);


}
