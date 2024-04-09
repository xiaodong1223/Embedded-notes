#include<stdio.h>

int main()
{
	int n=1;
	int m=2;
	m = n ^ m;
	printf("%d\n",m);
	m = n ^ m;
	printf("%d\n",m);
	n = n ^ m;
	printf("%d\n",n);
	return 0;
}
