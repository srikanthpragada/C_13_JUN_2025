// Program to take two numbers and display the largest
// Date : 20-JUN-2025

#include <stdio.h>

void main()
{
  int n1, n2;

    printf("Enter two numbers :");
    scanf("%d%d", &n1, &n2);

    if(n1 > n2)
        printf("%d", n1);
    else
        printf("%d", n2);
}
