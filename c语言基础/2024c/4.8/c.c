#include<stdio.h>

void test(int a, int b, int c)
{
	printf("a:%d, b:%d, c:%d\n", a, b, c);
}

int main(void)
{
	int i = 0; 
	test(i++, i++, i++);

	return 0;
}
