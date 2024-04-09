//写一个猜数字的小游戏

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int rand_s()
{
	int ret = 0;
	srand(time(NULL));
	ret = rand() % 99;

	return ret;
}

void menu()
{
	int i = 0;
	int num = 0;
	int ret = rand_s();
	printf("请输入:");

	while(1)
	{
		scanf("%d", &num);
		setbuf(stdin, NULL);
		if (num > ret)
			printf("你输入的数大了\n");
		else if (num < ret)
			printf("你输入的数小了\n");
		else
		{
			printf("恭喜你输入正确\n");
			i = 2;
		}
		if (i == 2)
			break;
		i++;
	}
}

int main(void)
{
	menu();

	return 0;
}

