// Program to create an array and fill it with values
// Date : 30-JUN-2025

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
   int a[10], i;

      srand(time(0));
      for(i = 0; i < 10; i ++)
      {
          a[i] = rand() % 100;
          printf("%d\n", a[i]);
      }


}
