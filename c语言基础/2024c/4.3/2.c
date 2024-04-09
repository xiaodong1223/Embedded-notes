#include<stdio.h>
int main(void)
{
	char ch;
	while(1)
	{
		scanf(" %c", &ch);
		
		
			if(ch > 'A' && ch < 'Z')
				printf("ch=%c\n", ch = ch + ('a' - 'A'));
			else if(ch > 'a' && ch < 'z')
				printf("ch=%c\n", ch = ch - ('a' - 'A'));
			else 
				printf("你输入的不是字母\n");

		
	}
}
