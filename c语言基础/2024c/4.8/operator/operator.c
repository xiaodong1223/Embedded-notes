// 包含的是当前路径下的operator.h文件
#include "operator.h"
// #include<stdio.h> <>包含的头文件的路径一定要在环境变量中

data_t add2num(data_t a, data_t b)
{
	return a + b;
}

data_t sub2num(data_t a, data_t b)
{
	return a - b;
}

data_t mul2num(data_t a, data_t b)
{
	return a * b;
}

data_t div2num(data_t a, data_t b)
{
	return a / b;
}
