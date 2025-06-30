// Program to create an array and fill it with values and then search for a value
// Date : 30-JUN-2025

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
   int a[10], n, i;

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
          {
              printf("Found at %d",i);
              break;
          }
      }

      if(i == 10)
        printf("Sorry! Not found!");


}
