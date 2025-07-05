// Program to create a function to print sign of the number
// Date : 05-JUL-2025

#include <stdio.h>

// User-defined function
void sign(int num)
{
  if(num > 0)
      puts("Positive");
  else
    if(num < 0)
       puts("Negative");
    else
       puts("Zero");
}

void main()
{

      sign(10);
      sign(-20);

}
