/*
写一段程序，将十进制转换为二进制并输出   
*/
#include<stdio.h>

//取于
int binary(int *p, int num)
{
	int i = 0;
	
	for (i = 0; ; i++)
	{
		p[i] = num % 2;
		num /= 2;
		if(num == 0)
			break;
	}

	return i;
}

//打印
void print_p(int *p, int len)
{
	int i = 0;
	for (i = len ; i >= 0; i--)
		printf("%d", p[i]);
	printf("\n");
}

int main(void)
{
	int p[100] = {0};
	int number = 0;
	int len = 0;
	printf("请输入一个数\n");
	scanf("%d", &number);

	len = binary(p, number);
	print_p(p, len);

	return 0;
}
