#include<stdio.h>

#define BASE_YEAR  1970
#define BASE_WEEK  3

int day_of_month(int m, int y);
int is_leap(int year);

int main()
{
	int year, month;
	int month_days;
	int sum_days;
	int week_day;
	int i;

	do{
		printf("y/m");
		scanf("%d/%d", &year, &month);
	} while (!(year >= BASE_YEAR && month >= 1 && month <=12));

	month_days = day_of_month(month, year);

	sum_days = 0;
	for (i=BASE_YEAR; i<year; i++)
		sum_days += (365 + is_leap(i));
	
	for (i=1; i<month; i++)
		sum_days += day_of_month(i, year);

	sum_days += 1;
	week_day = (sum_days + BASE_WEEK) % 7;

	printf("   %d月%d\n", month, year);
	printf("日 一 二 三 四 五 六\n");
	for (i=0; i<week_day; i++)
		printf("   ");
	for (i=1; i<=month_days; i++)
		printf("%2d%c", i, (i + week_day) % 7 == 0 ? '\n' : ' ');
	printf("\n");
}

int is_leap(int year)
{
	return year % 4 == 0 && year %100 != 0 || year % 400 == 0;
}

int day_of_month(int m, int y)
{
	int days = 0;
	
	switch (m) 
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			days = 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			days = 30;
			break;
		case 2:
			days = 28 + is_leap(y); 
			break;
		default:
			break;
	}

	return days;
}

