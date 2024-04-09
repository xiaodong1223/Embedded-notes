/*
   随机产生100个元素组成的整型数组，统计数组中有多少个质数
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//随机数
void rand_num(int *p, int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		p[i] = rand() % 101;
	}

}

//质数个数
int prime_number(int *p, int len)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 0; i < len; i++)
	{	
		if (p[i] == 0 || p[i] == 1)
			continue;

		for (j = 2; j < p[i]; j++)
		{
			if (p[i] % j == 0)
				break;
		}
		if (p[i] == j)
		{
			count++;	
		}
	}
	return count;

}

//打印
void print_p(int *p, int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		printf("%d ", p[i]);
	}
	printf("\n");
}


int main(void)
{
	srand(time(NULL));
	int a[100] = {0};
	int prime_num = 0;
	int len = sizeof(a)/sizeof(a[0]);
	
	rand_num(a, len);
	print_p(a, len);

	prime_num = prime_number(a, len);
	printf("质数共有%d个\n", prime_num);
	
	return 0;
}
