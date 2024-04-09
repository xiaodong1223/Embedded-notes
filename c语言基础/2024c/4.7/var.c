#include<stdio.h>

//全局变量

int glob1, glob2, glob3, glob4;

void test(int n);

int main(void)
{
	int m1, m2, m3, m4;

	test(1);
	test(2);
	test(3);

	printf("m1:%d, m2:%d, m3:%d, m4:%d\n", m1, m2, m3, m4);
	printf("glob1:%d, glob2:%d, glob3:%d, glob4:%d\n", glob1, glob2, glob3, glob4);

	return 0;
}


void test(int n)
{
	static int s = 0;//局部静态变量，值一定是0,多次调用的是同一个变量
	int v = 0;

	s++;
	v++;

	printf("s:%d, v:%d, n:%d\n", s , v, n);
}
