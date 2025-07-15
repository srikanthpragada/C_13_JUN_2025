// Program to create a file and write into it
// Date : 15-JUL-2025

#include <stdio.h>
#include <stdlib.h>


void main()
{
 FILE * fp;
 char names[][20] = {"Scott", "Henry", "Jason", "Larry", "Micheal"};


       fp = fopen("names.txt", "wt");

       if (fp == NULL)
       {
           printf("Sorry! Could not open file!");
           exit(1); // exit with failure
       }

       for(int i = 0; i < 5; i ++)
       {
           fprintf(fp, "%s\n", names[i]);
       }

       fclose(fp);

}
