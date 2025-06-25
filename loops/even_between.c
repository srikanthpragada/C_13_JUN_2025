// Program to take 2 numbers display all even numbers between them
// Date : 25-JUN-2025

#include <stdio.h>

void main()
{
  int first, last, n;

      printf("Enter two numbers :");
      scanf("%d%d", &first, &last);

      n = first % 2 == 0 ? first : first + 1;

      while(n <= last)
      {
         printf("%d ", n);
         n += 2;
      }


}
