// Program to create a function to take an array and return total
// Date : 08-JUL-2025

#include <stdio.h>
#include <string.h>


int total_array(int a[10])
{
 int i, total = 0;

       for(i = 0; i < 10 ; i ++)
       {
          total += a[i];
       }

       return total;
}

void main()
{

 int arr[] = {1, 10, 20, 5, 6, 8, 9, 10, 29, 33};
 int sum;

     sum = total_array(arr);
     printf("Total = %d", sum);

}

