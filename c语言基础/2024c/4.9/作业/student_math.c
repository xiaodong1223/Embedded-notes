/*
   读入10个学生的成绩，求出最高分，最低分和平均分，并打印成绩分布,一个*表示一个人
例如
100 ***
90 ~99 **
80~89 *
0~9 **
*/

#include<stdio.h>


//交换位置
void change(int x, int y)
{
	int temp = 0;
	temp = x;
	x = y;
	y = temp;
}

//最高分
int max_math(int *p, int len)
{
	int max = p[0];
	int i = 0;
	int count = 0;
	
	for (i = 1; i < len; i++)
	{
		if (max < p[i])
			max = p[i];
	}


	return max;
}

int min_math(int *p, int len)
{
	int min = p[0];
	int i = 0;
	int count = 0;
	
	for (i = 1; i < len; i++)
	{
		if (min > p[i])
			min = p[i];
	}


	return min;
}

//平均分
int avg_math(int *p, int len)
{
	int sum = 0;
	int i = 0;
	int avg = 0;

	for (i = 0; i < len; i++)
	{
		sum += p[i];
	}
	avg = sum / len;
	
	return avg;
	
}

//人数
int number(int *p, int len, int math)
{
	int i = 0;
	int count = 0;

	for (i = 0; i < len; i++)
	{
		if (p[i] == math)
			count++;
	}

	return count;
}

//打印 
void print_p(int *p, int len, int num) 
{
	int i = 0;

	for (i = 0; i < num; i++)
	{
		printf("*");
	}
	printf("\n");
}

int main(void)
{
	int str[10];
	int len = sizeof(str)/sizeof(str[0]);
	int i = 0;
	int math = 0;
	int max = 0, max_num = 0;
	int min = 0, min_num = 0;
	int avg = 0, avg_num = 0;

	printf("请输入学生分数\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &math);
		str[i] = math;
	}

	max = max_math(str, len);
	max_num = number(str, len, max);

	min = min_math(str, len);
	min_num = number(str, len, min);

	avg = avg_math(str, len);
	avg_num = number(str, len, avg);
	
	printf("最高分%d: ", max);
	print_p(str, len, max_num);
	printf("最低分%d: ", min);
	print_p(str, len, min_num);
	printf("平均分%d: ", avg);
	print_p(str, len, avg_num);

}
