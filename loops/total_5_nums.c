// Program to take 5 numbers display the total
// Date : 25-JUN-2025

#include <stdio.h>

void main()
{
  int num, total, i;

      i = 1;
      total = 0;
      while(i <= 5)
      {
          printf("Enter a number :");
          scanf("%d", &num);
          total += num;

          i ++;
      }

      printf("Total = %d", total);
}
