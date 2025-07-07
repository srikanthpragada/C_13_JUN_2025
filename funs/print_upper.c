// Program to create a function to takes a string and prints only uppercase letters
// Date : 07-JUL-2025

#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>


void print_upper(char st[20])
{
 int i;

       for(i = 0; st[i] != '\0';  i ++)
       {
            if(isupper(st[i]))
                putch(st[i]);
       }
}

void main()
{
  char s[20] = "This Is COOL";


     print_upper(s);

}
