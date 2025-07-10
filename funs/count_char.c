// Program to create a function to take a string and a char and return
// how many times the char is present in the string
// Date : 10-JUL-2025

#include <stdio.h>
#include <string.h>


int count_char(char st[30], char ch)
{
 int i, count = 0;

       for(i = 0; st[i] != '\0' ; i ++)
       {
          if(st[i] == ch)
             count ++;
       }

       return count;
}

void main()
{

     printf("Count of o : %d\n", count_char("how are you", 'O'));

}

