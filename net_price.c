// Program to take price and display net price
// Date : 18-JUN-2025

#include <stdio.h>

void main()
{
  int price, discount, net_price;


    printf("Enter price :");
    scanf("%d", &price);

    discount =  price * 10 / 100;
    net_price = price - discount;


    printf("Price      : %5d\n", price);
    printf("- Discount : %5d\n", discount);
    printf("Net Price  : %5d", net_price);
}
