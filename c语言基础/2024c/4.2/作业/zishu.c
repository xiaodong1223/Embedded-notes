#include<stdio.h>
int main()
{
	int i = 1,count = 0, j = 2;
	while(i < 101)
	{
		for(j = 2;j < i; j++)
		{
			if(i%j==0)
				break;
		}
		if(i > j)
		else
		{
			printf("%d是质数\n",i);
			count++;
		}
		i++;
	}
	printf("100以内质数有%d个\n",count);
	return 0; 

}
