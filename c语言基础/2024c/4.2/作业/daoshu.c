#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int ret;
	int g,s,b;
	srand(time(NULL));
	ret = rand() % 901 + 100;
	printf("随机数是%d\n",ret);
	g = ret % 10;
	s = ret / 10 % 10;
	b = ret / 100;
	printf("他的逆序数是:%d\n", g*100+s*10+b);
	
}
