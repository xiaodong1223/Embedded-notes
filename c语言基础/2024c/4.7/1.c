#include<stdio.h>

int sum_n(int n);

int main(void)
{
	int num;
	int ret;

	scanf("%d", &num);

	// 调用函数
	/*
	 * 		调用过程
	 * 			main记录程序当前执行的位置
	 * 			切换函数的地址到sum_n
	 * 			调用执行sum_n函数
	 * 			当函数执行结束,切换会main记录地址继续进行
	 * */
	 ret = sum_n(num);

	 printf("%d的前n项和为%d\n", num, ret);

	 return 0;
}

int sum_n(int n)
{
	int sum = 0;

	while (n) {
		sum += n;
		n--;
	}

	return sum;
}
