// Program to read names.txt and print its contents
// Date : 16-JUL-2025

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


void main()
{
 FILE * fp;
 int ch;

       fp = fopen("names.txt", "rt");

       if (fp == NULL)
       {
           printf("Sorry! Could not open file!");
           exit(1); // exit with failure
       }


       while(1)
       {
           ch = fgetc(fp);
           if (ch == EOF)
              break;

           putch(ch);
       }

       fclose(fp);
}
