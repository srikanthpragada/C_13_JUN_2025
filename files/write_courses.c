// Program to create courses.dat and write 5 courses into it
// Date : 18-JUL-2025

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct course
{
  char title[20];
  int duration, fee;
};

void main()
{
 FILE * fp;
 int marks, i;

 struct course courses[] = {
          {"Python", 30, 10000},
          {"Java", 30, 10000},
          {"Generative AI", 20, 15000},
          {"FSWD", 36, 15000},
          {"AWS", 15, 10000}
         };


       fp = fopen("courses.dat", "wb");

       if (fp == NULL)
       {
           printf("Sorry! Could not open source file!");
           exit(1); // exit with failure
       }

       for(i = 0; i < 5; i ++)
       {
            fwrite(&courses[i], sizeof(struct course), 1, fp);
       }

       fclose(fp);

}
