// Program to create a function to take an array and a value and returns
// the position where value is found, if not found, it returns -1
// Date : 08-JUL-2025

#include <stdio.h>
#include <string.h>


int search_array(int a[10], int num)
{
 int i;

       for(i = 0; i < 10 ; i ++)
       {
          if(a[i] == num)
             return i;
       }

       return  -1;  // not found
}

void main()
{

 int arr[] = {1, 10, 20, 5, 6, 8, 9, 10, 29, 33};


     printf("Position of 6  : %d\n", search_array(arr, 6));
     printf("Position of 60 : %d", search_array(arr, 60));

}

