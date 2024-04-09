#include<stdio.h>

//判断是否为闰年
int is_leap_year(int year)
{
	return ((year % 4 == 0 && year % 400 != 0)||(year % 400 == 0));
}

//星期偏移数
int day_of_week(int year, int month, int day)
{
	int t[]={0,3,2,5,0,3,5,1,4,6,2,4};
	year = year - 1970;
	return (year + year / 4 - year / 100 + year / 400 + t[month - 1] + day ) % 7;
}

void print_month_header()
{
	printf("星期日	星期一	星期二	星期三	星期四	星期五	星期六");
}

void print_calendar_line(int days, int dow)//dow星期的偏移量
{
	int i;
	for (i = dow; i > 0; i--)
		printf("  ");
	for(i = 1; i <= days; i++)
	{
		printf("%7d",i);
		if((i + dow) % 7 == 0)
			printf("\n");
	}
	printf("\n");	
}

void print_month(int year, int month)
{
	int days_in_month[]={31,28,31,30,31,30,31,31,30,31,30,31};
	if(month == 2 && is_leap_year(year))
		days_in_month[1]++;

	int first_day_of_month = day_of_week(year, month, 1);//年月日上传，判断星期偏移

	print_month_header();
	print_calendar_line(days_in_month[month-1], first_day_of_month);

}

int main(void )
{
	int year, month;
	printf("请输入年份和月份\n");
	scanf("%d %d", &year, &month);

	print_month(year, month);
	
	return 0;
}
