// Program to take two files and copy first one to second one
// Date : 16-JUL-2025

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>


void main()
{
 FILE * sfp, * tfp;
 char sfilename[30], tfilename[30];
 int ch;

       printf("Enter source filename :");
       gets(sfilename);

       printf("Enter target filename :");
       gets(tfilename);


       sfp = fopen(sfilename, "rt");

       if (sfp == NULL)
       {
           printf("Sorry! Could not open source file!");
           exit(1); // exit with failure
       }


       tfp = fopen(tfilename, "wt");

       if (tfp == NULL)
       {
           printf("Sorry! Could not open target file!");
           exit(2); // exit with failure
       }

       while(1)
       {
           ch = fgetc(sfp);
           if (ch == EOF)
              break;

           fputc( toupper(ch), tfp);
       }

       fclose(sfp);
       fclose(tfp);
}
