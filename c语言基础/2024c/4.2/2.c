#include<stdio.h>
int main(void )
{

	int count=0;
	int sum=1;
	while(sum<101)
	{
		if(sum%3==0&&sum%5==0)
		{
			count++;
			printf("%d\n",sum);
		}		
		sum++;
	}
	printf("100以内能被3和5整除的数有%d个\n",count);


	int year=1970;
	int count1=0;
	for(year;year<2025;year++)
	{
		if((year%4==0&&year%100!=0)||year%400==0)
		{
			continue;
			count1++;
		}
	}
	printf("今年距离计算机元年有%d个闰年\n",count1);
	

	/*
	int score;
	do{
		scanf("%d",&score);
	}while(!(score >= 0 && score <= 100) && printf("请重新输入\n"));
	*/
}
