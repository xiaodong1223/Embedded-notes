#include<stdio.h>

#define SQUARE(n) ((n) * (n))
#define SWAP(a, b) do{ typeof(a) t = a;	a = b; b = t;}while(0)

int main(void)
{
	int num = 2;
	int m = 100;

	printf("%d\n", SQUARE(num + 3));

	SWAP(num, m);
	printf("num:%d, m:%d\n", num, m);


}
