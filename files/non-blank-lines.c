// Program to take a filename and displays non-blank lines
// Date : 17-JUL-2025

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main()
{
 FILE * fp;
 char filename[30], line[100];
 char * p;


       printf("Enter filename :");
       gets(filename);

       fp = fopen(filename, "rt");

       if (fp == NULL)
       {
           printf("Sorry! Could not open the file!");
           exit(1); // exit with failure
       }


       while(1)
       {
           p = fgets(line, 100, fp);

           if (p == NULL)   // EOF
              break;

           if(strlen(line) > 1)
                printf("%s",line);
       }

       fclose(fp);

}
