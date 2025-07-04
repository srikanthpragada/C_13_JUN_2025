// Program to take a string and display after inverting the case
// Date : 04-JUL-2025

#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

void main()
{
    char name[20], largest_name[20];
    int i;


       strcpy(largest_name, "");

       for(i = 1; i <= 5; i ++)
       {
          printf("Enter a name :");
          gets(name);

          if(strcmp(name, largest_name) > 0)
               strcpy(largest_name, name);
       }

       printf("Largest Name : %s", largest_name);

}
