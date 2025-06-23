// Program to salary and display net salary
// Date : 23-JUN-2025

#include <stdio.h>

void main()
{
  int salary, hra, da, net_salary;

    printf("Enter Salary :");
    scanf("%d", &salary);

    if(salary > 100000)
    {
        hra = salary * 20 / 100;
        da = salary * 10 / 100;
    }
    else
    {

        hra = salary * 25 / 100;
        da = salary * 15 / 100;
    }

    net_salary = salary + hra + da;
    printf("Net salary = %d", net_salary);

}
