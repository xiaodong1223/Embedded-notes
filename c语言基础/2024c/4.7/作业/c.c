//求百位数中有多少个质数
#include<stdio.h>

int prime_number()
{
	int count = 0;
	int f1 = 0;
	for (int i=100; i<1000; i++)
	{
		f1 = 1;
		for(int j=2; j<i; j++)
		{
			if (i % j == 0)
			{
				f1 = 0;
				break;
			}
		}	

		if(f1 == 1) 
		{
			printf("i = %d\n", i);
			count++;
		}

	}

	return count;
}

int main(void)
{
	int count = prime_number();
	printf("count= %d\n", count);

	return 0;
}


