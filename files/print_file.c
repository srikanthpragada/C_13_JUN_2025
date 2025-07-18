// Program to take a filename on commandline and print it with line numbers
// Date : 18-JUL-2025

#include <stdio.h>
#include <stdlib.h>


void main(int argc, char * argv[])
{
 FILE * fp;
 char line[100], * p;
 int lineno = 1;

       if(argc < 2)
       {
           printf("Sorry! Filename is missing!");
           exit(1);
       }

       fp = fopen(argv[1], "rt");

       if (fp == NULL)
       {
           printf("Sorry! Could not open source file!");
           exit(1); // exit with failure
       }

       while(1)
       {
            p = fgets(line, 100, fp);
            if (p == NULL)  // EOF
                 break;

            printf("%03d: %s", lineno++, line);

       }

       fclose(fp);

}
