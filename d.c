#include <stdio.h>
int main()
{
 int a[5][5];
 int(*p)[5];
 p = &a;
 printf( "%ld,%ld\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
 return 0;
}

