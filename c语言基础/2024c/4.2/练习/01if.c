#include<stdio.h>
int main(void)
{
	int num;

	scanf("%d", &num);

	if(num >= 0)
	{
		if(num % 2 == 0)
			printf("%d是一个偶数\n", num);
		else
			printf("%d是一个奇数\n", num);
	}

	return 0;
}
