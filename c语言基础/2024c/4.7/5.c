#include<stdio.h>

int cub(int num);
int sum_cub(int n);



int flo()
{
	int count = 0;
	for (int i=100; i<1000; i++)
	{
		if(i == sum_cub(i))
		{
			count++;
			printf("i=%d\n", i);
		}
	}
	return count;
}

int cub(int num)
{
	int sum = 0;
	sum = num * num * num;
	return sum;
}

int sum_cub(int n)
{
	int sum = 0;
	while(n)
	{
		 sum += cub(n % 10);
		 n /= 10;
	}
	return sum;

}

int main(void)
{
	int count = flo();
	printf("count=%d\n", count);

	return 0;
}
