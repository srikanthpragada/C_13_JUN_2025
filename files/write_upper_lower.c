// Program to create a file and write uppercase and lowercase letters into it
// Date : 15-JUL-2025

#include <stdio.h>
#include <stdlib.h>


void main()
{
 FILE * fp;

       fp = fopen("chars.txt", "wt");

       if (fp == NULL)
       {
           printf("Sorry! Could not open file!");
           exit(1); // exit with failure
       }

       for(int ch = 65; ch <= 90; ch ++)
       {
           fputc(ch, fp);
       }

       for(int ch = 97; ch <= 122; ch ++)
       {
           fputc(ch, fp);
       }


       fclose(fp);

}
