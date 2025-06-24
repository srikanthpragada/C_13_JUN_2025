// Program to take a number and display whether it is divisible by 3 and 5
// Date : 24-JUN-2025

#include <stdio.h>

void main()
{
  int num;

      num = 2;
      while(num <= 50)
      {
          printf("%d ", num);
          num += 2;
      }


      num = 1;
      while(num <= 50)
      {
          if(num % 2 == 0)
              printf("%d ", num);

          num ++;
      }
}
