/*
  如果现在再让你去求月份对应的天数，结合数组有新的方式吗？请呈现
*/

#include<stdio.h>

//闰年平年
int leay_year(int year)
{
	return (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
}

//天数
int month_day(int year, int month)
{
	int a[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (leay_year(year) == 1)
	{
		a[2]++;
	}

	return a[month];
}

int main(void)
{
	int year = 0;
	int month = 0;
	int day = 0;

	printf("年/月\n");
	scanf("%d/%d", &year, &month);

	if(year > 0 && month > 0 && month < 13)
	{
		day = month_day(year, month);
		printf("这个月份有%d天\n", day);
	}
	else 
		printf("你输入错误\n");

	return 0;
}
