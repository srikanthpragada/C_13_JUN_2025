// Program to take price dnd display discount
// Date : 20-JUN-2025

#include <stdio.h>

void main()
{
  int price, discount;

    printf("Enter price :");
    scanf("%d", &price);

    if(price > 1000)
        discount = price * 20 / 100;
    else
        discount = price * 10 / 100;

    printf("Discount = %d", discount);

}
