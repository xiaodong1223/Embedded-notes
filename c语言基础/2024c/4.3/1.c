#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	long num = 0;
	long res;

	srand(time(NULL));

	res=rand();
	printf("res=%ld\n",res);

	for(res ; res > 0 ; res = res/10)
	{
		num = res % 10 +num * 10;

		printf("num=%ld\n", num);
	}
}
