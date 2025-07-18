// Program to open courses.dat and display details of a given course
// Date : 18-JUL-2025

#include <stdio.h>
#include <stdlib.h>

struct course
{
  char title[20];
  int duration, fee;
};

void main()
{
 FILE * fp;
 int courseno, count, pos;

 struct course course;

       fp = fopen("courses.dat", "rb");

       if (fp == NULL)
       {
           printf("Sorry! Could not open source file!");
           exit(1); // exit with failure
       }

       printf("Enter course no. :");
       scanf("%d",&courseno);

       pos = (courseno - 1) * sizeof(struct course);

       fseek(fp, pos, SEEK_SET);  // move pointer to required location in the file

       count = fread(&course, sizeof(struct course), 1, fp);

       if(count == 0)
          printf("Sorry! Course not found!");
       else
          printf("%s - %d - %d", course.title, course.duration, course.fee);

       fclose(fp);

}
