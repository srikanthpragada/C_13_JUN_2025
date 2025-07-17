// Program to open marks.dat and read marks from it
// Date : 17-JUL-2025

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main()
{
 FILE * fp;
 int marks, count;

       fp = fopen("marks.dat", "rb");

       if (fp == NULL)
       {
           printf("Sorry! Could not open source file!");
           exit(1); // exit with failure
       }

       while(1)
       {
          count = fread(&marks, sizeof(marks), 1, fp);
          if(count == 0)  // EOF
            break;

          printf("%5d", marks);
       }

       fclose(fp);

}
