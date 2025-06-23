// Program to take month number and display number of days
// Date : 23-JUN-2025

#include <stdio.h>

void main()
{
  int month;

    printf("Enter month number :");
    scanf("%d", &month);

    if(month == 2)
         printf("28");
    else
        if(month == 4 || month == 6 || month == 9 || month == 11)
           printf("30");
        else
           printf("31");

}
