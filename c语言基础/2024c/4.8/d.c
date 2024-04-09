#include<stdio.h>

int sumn(int n)
{
	if (n <= 0)
		return 0;

	return n + sumn(n - 1);
}

int main()
{
	int i;

	for (i = 0; i <= 10; i++)
		printf("%d,", sumn(i));
	printf("\n");

	return 0;
}
