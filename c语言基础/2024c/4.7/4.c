#include<stdio.h>

int Fib(int n)
{
	int x = 1, y = 1;
	int sum = 0;
	int i = 0;

	printf("第%d项是%d\n", 1, x);
	printf("第%d项是%d\n", 2, y);
	while (n-2 > i)
	{
		sum = x + y;
		printf("第%d项是%d\n", i+3, y);

		x = y;
		y = sum;
		i++;
	}

	return y;

}

int main()
{
	int n;
	int y = 0;
	scanf("%d", &n);

	y = Fib(n);
	return 0;
}
