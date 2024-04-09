#include<stdio.h>

//交换
void change(int *p, int x, int y)
{
	int temp;
	temp = p[x];
	p[x] = p[y];
	p[y] = temp;
}

//希尔排序
void shell_sort(int *p, int len)
{
	int i = len/2;  // 步长
	int j = 0;
	int c = 0;

	for (i = len/2; i > 0; i/=2)
	{
		for (j = i; j < len; j++)
		{
			for (c = j; (c-i) >= 0; c--)
			{
				if(p[c] < p[c-i])
					change(p, c, c-i);
			}
					
		}
	}
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
	int arr[10] = {1,9,1,0,7,5,99,27,33,-1};
	print_p(arr, 10);
	shell_sort(arr, 10);
	print_p(arr, 10);


}
