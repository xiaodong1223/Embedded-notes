#include<stdio.h>
#include"operator.h"
int main () 
{
	int m, n;
	
	scanf("%d%d", &m, &n);
	
	printf("%d + %d =%d\n", m, n, add2num(m, n));
	printf("%d + %d =%d\n", m, n, sub2num(m, n));

	return 0;
}
