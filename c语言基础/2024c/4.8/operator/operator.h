// 条件编译:防止在此头文件重复包含的时候重复展开
#ifndef __OPRATOR_H__
#define __OPRATOR_H__

// 定义类型
typedef int data_t;

// 函数的声明
extern data_t add2num(data_t a, data_t b);

extern data_t sub2num(data_t a, data_t b);

extern data_t mul2num(data_t a, data_t b);

extern data_t div2num(data_t a, data_t b);

#endif
