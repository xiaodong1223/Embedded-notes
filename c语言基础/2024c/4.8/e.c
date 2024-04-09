/*
定义一个函数，求斐波那契数列的第n项
a.
1 1 2 3 5 8 13 21 ......
 */
#include<stdio.h>


int i = 1;
int j = 1;
int sum;

int Fib(int n)
{
	if (n == 1 || n == 2)
		return 1;

	return Fib(n - 1) + Fib(n - 2);
}

int main(void)
{
	for(int c = 1; c < 5; c++)
	{
		printf("%d,", Fib(c));
	}
	printf("\n");
}
