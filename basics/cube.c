// Program to take a number and print cube
// Date : 17-JUN-2025

#include <stdio.h>

void main()
{
  int num, cube;

    //1. Input
    printf("Enter a number :");
    scanf("%d", &num);      // read an int from keyboard

    //2. Process
    cube = num * num * num;

    //3. Output
    printf("Cube of %d is %d", num, cube);
}
