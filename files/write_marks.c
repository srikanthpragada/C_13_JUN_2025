// Program to create marks.dat and write 50 marks into it
// Date : 17-JUL-2025

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main()
{
 FILE * fp;
 int marks, i;


       srand(time(0));

       fp = fopen("marks.dat", "wb");

       if (fp == NULL)
       {
           printf("Sorry! Could not open source file!");
           exit(1); // exit with failure
       }

       for(i = 1; i <= 50; i ++)
       {
            marks = rand() % 100;
            fwrite(&marks, sizeof(marks), 1, fp);
       }

       fclose(fp);

}
