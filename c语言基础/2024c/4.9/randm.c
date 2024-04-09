#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define NUMBER 10

int rand_num();
void rand_number(int a[], int len);
void print_a(int a[], int len);
int  max_number(int a[], int len);
int  min_number(int a[], int len);
void change(int a[],int x, int y);
void reverse_order(int a[], int len);

//随机数
int rand_num()
{
	int ret = 0;
	ret = rand() % 101;

	return ret;
}

//随机数赋值
void rand_number(int a[], int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{	
		a[i] = rand_num();
	}

}

//打印
void print_a(int a[], int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
		printf("%d ", a[i]);
	printf("\n");
}

//最大值
int  max_number(int a[], int len)
{
	int max = a[0];
	int i = 0;
	
	for (i = 0; i < len; i++)
	{
		if(max < a[i])
			max = a[i];
	}

	for (i = 0; i < len; i++)
	{
		if (a[i] == max)
			break;
	}
	printf("max=%d\n", max);
	
	return i;
}

//最小值
int  min_number(int a[], int len)
{
	int min = a[0];
	int i = 0;
	int count = 0;

	for (i = 0; i < len; i++)
	{
		if(min > a[i])
			min = a[i];
	}

	for (i = 0; i < len; i++)
	{
		if (a[i] == min)
			break;
	}
	printf("max=%d\n", min);

	return i;
}

void change(int a[],int x, int y)
{
	int temp = 0;
	temp = a[x];
	a[x] = a[y];
	a[y] = temp;
}

//倒序输出
void reverse_order(int a[], int len)
{
	int i = len;
	for (i = len-1; i >= 0; i--)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

int main(void)
{
	srand((unsigned int)time(NULL));
	int a[NUMBER] = {0};
	int max = 0, min = 0;

	rand_number(a, NUMBER);
	print_a(a, NUMBER);
	reverse_order(a, NUMBER);
	max = min_number(a, NUMBER);
	min = max_number(a, NUMBER);

	change(a, max, min);
	print_a(a, NUMBER);
	reverse_order(a, NUMBER);

	return 0;
}
