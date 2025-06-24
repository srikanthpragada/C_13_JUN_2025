// Program to take weekday and no. of hours and display wage
// Date : 24-JUN-2025

#include <stdio.h>

void main()
{
  int day, hours, wage;

    printf("Enter day [1-7] and no. hours worked:");
    scanf("%d%d", &day, &hours);

    switch(day)
    {
        case 1:
        case 2:
        case 3: wage = hours * 100;
                break;
        case 4:
        case 5: wage = hours * 120;
                break;
        case 6: wage = hours * 150;
                break;
        default : wage = hours * 200;
    }

    printf("Wage = %d", wage);
}
