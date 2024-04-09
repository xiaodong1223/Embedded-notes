#include<stdio.h>
int main()
{
	int year, month;
	int sm[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	int start=1970;
	int sum=0;
	int q=0;
	printf("请输入年月\n");
	scanf("%d%d", &year, &month);
	for(start;start < year; start++)
	{
		if(start % 4 == 0 && start % 100 != 0 || start % 400 == 0)
			sum += 366;
		else
			sum += 365;
	}
	for(int i = 1;i < month;i++)
	{
		if(i == 2)
			sm[2]++;
		sum += sm[i];
	}
	q = (sum + 4) % 7;
	printf("q=%d\n",q);
	printf("====================================================\n");
	printf("周日	周一	周二	周三	周四	周五	周六\n");
	for(int i = 0;i < q;i++)
		printf("\t ");
	for(int i = 1;i <= sm[month];i++)
	{
		printf("%2d",i);
		printf("\t ");
	//	if((sum + i + 3) % 7 == 6)
		if((q + i) % 7 == 0)
		{
			printf("\n");
		}
	}
	printf("\n====================================================\n");
	

	
}
