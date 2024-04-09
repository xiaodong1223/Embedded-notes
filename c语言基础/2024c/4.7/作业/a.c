//写一个函数，功能是将字符进行大小写转换，如果大写返回其小写，如果是小写，返回其大写
#include<stdio.h>

char change(char a)
{
	if (a <= 'z' && a >= 'a')
		a = a - ('a' - 'A');
	else if (a <= 'Z' && a >= 'A')
		a = a + ('a' - 'A');
	else
	{
		printf("你输入错误\n");
		return 0;
	}
	printf("%c\n", a);
	return a;
}

int main(void)
{
	char a = ' ';
	char temp;
	printf("请输入一个字母\n");
	scanf(" %c", &a);
	temp = change(a);
	
}
