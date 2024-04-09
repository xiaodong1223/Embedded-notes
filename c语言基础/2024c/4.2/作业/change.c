#include<stdio.h>
int main(void)
{
	int a;
	int b;
	int temp;
	printf("请输入两个数\n");
	scanf("%d%d",&a,&b);
		temp = a;
		a = b;
		b = temp;
	if(a > b)
		printf("%d>%d\n",a,b);
	else
		printf("%d<%d\n",a,b);
	

}
