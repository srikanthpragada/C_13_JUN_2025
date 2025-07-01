// Program to create an array and fill it with values and display values that are
// greater than avg. of the array
// Date : 01-JUL-2025

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
   int a[10], total = 0, avg, i;

      srand(time(0));
      for(i = 0; i < 10; i ++)
      {
          a[i] = rand() % 100;
          printf("%5d", a[i]);
          total += a[i];
      }

      avg = total / 10;

      printf("\nValues higher than average (%d) of the array :", avg);

      for(i = 0; i < 10; i ++)
      {
          if(a[i] > avg)
              printf("%5d", a[i]);
      }

}
