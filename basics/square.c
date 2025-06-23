// Program to take a number and print square
// Date : 17-JUN-2025

#include <stdio.h>

void main()
{
  int num, square;

    //1. Input
    printf("Enter a number :");
    scanf("%d", &num);      // read an int from keyboard

    //2. Process
    square = num * num;

    //3. Output
    printf("Square = %d", square);
}
