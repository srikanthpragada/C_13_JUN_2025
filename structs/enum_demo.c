// Program to demo enum
// Date : 14-JUL-2025

#include <stdio.h>


enum payment {
   CASH, CARD, UPI
};


void main()
{
   enum payment mode;


     mode = CASH;

     if(mode == UPI)
         printf("UPI");

     printf("%d",mode);


}
