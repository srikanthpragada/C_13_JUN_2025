// Program to take price and qty and display net amount
// Discount rate is 15% and tax is 12%
// Date : 20-JUN-2025

#include <stdio.h>

void main()
{
  int price, qty, amount, discount, after_discount, tax, net_amount;


    printf("Enter price :");
    scanf("%d", &price);

    printf("Enter qty  :");
    scanf("%d", &qty);

    amount = qty * price;
    discount =  amount * 15 / 100;
    after_discount = amount - discount;
    tax = after_discount * 12 / 100;
    net_amount = after_discount + tax;


    printf("Amount         : %5d\n", amount);
    printf("- Discount     : %5d\n", discount);
    printf("After Discount : %5d\n", after_discount);
    printf("+ Tax          : %5d\n", tax);
    printf("Net Amount     : %5d\n", net_amount);

}
