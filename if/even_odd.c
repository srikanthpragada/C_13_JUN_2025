// Program to take a number and display whether it is even or odd
// Date : 21-JUN-2025

#include <stdio.h>

void main()
{
  int num;


    printf("Enter number :");
    scanf("%d", &num);

    if(num % 2 == 0)
        printf("Even");
    else
        printf("Odd");
}
