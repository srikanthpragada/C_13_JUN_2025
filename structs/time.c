// Program to create a structure to store time
// Date : 12-JUL-2025

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


struct time
{
  int h,m, s;
};

void main()
{
  struct time times[5];
  int i;

        srand(time(0));

        for(i = 0; i < 5; i ++)
        {
            // place random values in h, m, s
            times[i].h = rand() % 24;
            times[i].m = rand() % 60;
            times[i].s = rand() % 60;

            printf("%02d:%02d:%02d\n", times[i].h, times[i].m, times[i].s);
        }






}
