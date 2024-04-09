#include<stdio.h>
int main()
{
		printf("sizeof(char)=%ld\n",sizeof(char));
		printf("sizeof(short)=%ld\n",sizeof(short));
		printf("sizeof(int)=%ld\n",sizeof(int));
		printf("sizeof(long)=%ld\n",sizeof(long));
		printf("sizeof(long long)=%ld\n",sizeof(long long));
		printf("sizeof(float)=%ld\n",sizeof(float));
		printf("sizeof(double)=%ld\n",sizeof(double));

		int sum=0;
		for(int i=0;i<5;i++)
		{
			scanf("%d",&sum);
			printf("%d\n",sum);
		}
		return 0;
}
