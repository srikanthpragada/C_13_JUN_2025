// Program to take 10 numbers and count positive and negative numbers
// Date : 27-JUN-2025

#include <stdio.h>

void main()
{
  int num, i, p_count, n_count;


      p_count = n_count = 0;

      for(i = 1; i <= 10; i ++)
      {
          printf("Enter a number :");
          scanf("%d", &num);


          if(num < 0)
              n_count ++;
          else
              p_count ++;
      }

      printf("Positive Count = %d, Negative Count = %d", p_count, n_count);

}
