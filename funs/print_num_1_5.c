// Program to create a function to print 1 to 10
// Date : 05-JUL-2025

#include <stdio.h>
#include <string.h>


void print_numbers()
{
 int i;

       for(i = 1; i <= 10; i ++)
       {
          printf("%5d", i);
       }
}

void main()
{

 int i;

      for(i = 1; i <= 5; i ++)
      {
          print_numbers();
          printf("\n");
      }


}
