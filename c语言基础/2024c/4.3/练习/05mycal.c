#include<stdio.h>

#define BASE_YEAR 1970
#define BASE_WEEK 3

int main(void)
{
	//定义存储年月的变量
	int year, month;
	int month_days;
	int sum_days;
	int week_day;
	int i;

	//读取输入的日期
	do
	{
		printf("y/m:");
		scanf("%d/%d", &year, &month);
	}while(!(year >= BASE_YEAR && month >= 1 && month <= 12));

	//月对应的天数
	if(1 == month || 3 == month || 5 == month || 7 == month || 8 == month || 10 == month || 12 == month)
		month_days = 31;
	else if(4 == month || 6 == month || 9 == month || 11 == month)
		month_days = 30;
	else
		month_days = 28 + (year % 4 == 0 && year % 100 !=0 || year % 400 == 0);
	
	// 这个月1号是星期几
	sum_days = 0;
	for(i = BASE_YEAR; i < year; i++)
		sum_days += (i % 4 == 0 && i % 100 != 0 || i % 400 == 0 ? 366 : 365);
	
	for(i = 1; i < month; i++)
	{
		switch(i)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12: sum_days += 31;break;
					 
			case 4:
			case 6:
			case 9:
			case 11:sum_days += 31; break;

			case 2:sum_days += 28 + (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
			default:break;
		}
	}

	sum_days += 1;
	week_day = (sum_days + BASE_WEEK) % 7;

	printf("   %d月%d\n", month, year);
	printf("日 一 二 三 四 五 六\n");

	for(i = 0; i < week_day; i++)
	{
		printf("   ");
	}
	for(i = 1; i <= month_days; i++)
		printf("%2d%c", i, (i + week_day) % 7 == 0 ? '\n' : '|');
	printf("\n");
}
