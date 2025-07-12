// Program to create a structure to store details of a product
// Date : 12-JUL-2025

#include <stdio.h>
#include <string.h>


struct product
{
   // Members
   char name[20];
   int price, qoh;
};

void main()
{
   struct product p1, p2;  // struct variables
   struct product p3 = { "External HDD", 15000, 20};

       strcpy(p1.name, "iPhone 16 Pro");
       p1.price = 90000;
       p1.qoh = 10;

       printf("%s - %d  - %d\n", p1.name, p1.price, p1.qoh);

       strcpy(p2.name, "Logitech Mouse");
       p2.price = 10000;
       p2.qoh = 5;






}
