// Program to take 3 numbers and display the smallest using nested if statements
// Date : 23-JUN-2025

#include <stdio.h>

void main()
{
int a,b,c;

 printf("Enter 3 numbers :");
 scanf("%d%d%d", &a, &b, &c);


 if (a < b)
 {
   if(a < c)
       printf("%d", a);
   else
       printf("%d", c);
 }
 else
 {
  if(b < c)
     printf("%d", b);
  else
     printf("%d", c);
 }
}
