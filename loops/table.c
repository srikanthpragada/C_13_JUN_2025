// Program to take a number and print table
// Date : 26-JUN-2025

#include <stdio.h>

void main()
{
  int num, i;

      printf("Enter a number :");
      scanf("%d", &num);

      for(i = 1; i <= 10; i ++)
      {
          printf("%3d * %2d = %4d\n", num, i, num * i);
      }

}
