#include<stdio.h>
int main(void)
{
	char ch;
	printf("请输入一个字符\n");
	scanf("%c",&ch);
	if(ch<97)
		ch=ch+('a'-'A');
	else
		ch=ch-('a'-'A');
	printf("%c\n",ch);
}
