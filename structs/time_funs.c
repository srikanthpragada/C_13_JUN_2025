// Program to create a structure to store time
// Date : 12-JUL-2025

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


struct time
{
  int h,m, s;
};

void print(struct time t)
{
   printf("%02d:%02d:%02d", t.h, t.m, t.s);
}

int totalseconds(struct time t)
{
    return t.h * 3600 + t.m * 60 + t.s;
}

int equals(struct time t1, struct time t2)
{
    return totalseconds(t1) == totalseconds(t2);
}

// 0   -> t1 == t2
// > 0 -> t1 > t2
// < 0 -> t1 < t2
int compare(struct time t1, struct time t2)
{
     return totalseconds(t1) - totalseconds(t2);
}

struct time max(struct time t1, struct time t2)
{
    return  totalseconds(t1) > totalseconds(t2) ? t1 : t2;
}


void main()
{
  struct time t1 = {1, 10, 15};
  struct time t2 = {1, 10, 15};


     print(t1);
     printf("\n%d", totalseconds(t1));
     printf("\n%d", equals(t1, t2));



}
