#include<stdio.h>
int int_number(int sum)
{
	int count = 0;
	while(1)
	{
		count++;
		sum = sum / 10;
		if (sum == 0)
			break;
	}
	return count;
}

int main(void)
{
	int count = 0;
	int sum = 0;
	
	printf("请输入一个数\n");
	scanf("%d", &sum);
	count = int_number(sum);
	printf("这个数有%d位\n", count);
}
