#include<stdio.h>
int main(void)
{
	int arr[100] = {1,2,3};
	int i = 0;

	// arr---->int *运算能力是sizeof(int)
	printf("arr=%p\n", arr);
	printf("arr+1=%p\n", arr+1);
	printf("sizeof(arr+1)=%ld\n", sizeof(arr+1));

	// &arr ----> 整个数组地址int *[3], 运算能力是sizeof(int) * 3
	printf("&arr=%p\n", &arr);
	printf("&arr+1 = %p\n", &arr+1);
	printf("sizeof(&arr+1)=%ld\n", sizeof(&arr+1));

	for (i = 0; i < 3; i++)
	{
		printf("%d ", i[arr]);
	}
	printf("\n");

	for (i = 0; i < 3; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
