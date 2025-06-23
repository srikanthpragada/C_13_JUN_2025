// Program to take two numbers and display sum, diff, and product.
// Date : 19-JUN-2025

#include <stdio.h>

void main()
{
  int n1, n2, total, diff, product;


    printf("Enter two numbers :");
    scanf("%d%d", &n1, &n2);

    total = n1 + n2;
    diff = n1 - n2;
    product = n1 * n2;


    printf("Total   = %5d\n",total);
    printf("Diff    = %5d\n",diff);
    printf("Product = %5d\n",product);
}
