/**
 * 2的10以内次方熟悉
 *
 * !g执行上一个g开头的命令
 * 预处理：#
 * 		gcc编译步骤
 * 			1.预处理
 * 				处理所有#开头的指令
 * 				gcc仅作预处理-------gcc -E   gcc -E  demo.c -o demo.i
 * 			2.编译
 * 				将c翻译汇编代码
 * 				gcc到编译处理-------gcc -S   gcc -S demo.c -o demo.s
 * 			3.汇编
 * 				生存汇编动作
 * 				gcc到汇编阶段-------gcc -C 	  gcc -C demo.c -o demo.o
 * 			4.连接
 * 				链接库的地址
 * 转义字符//制表符占一个字节
 *		'\n':下一行  
 *		'\r'：到行首 
 *		'\b'：退格 
 *		'\t'：制标符
 *		字符的ASCII码
 *		   '\0':尾0
 *			'0':48
 *			'A':65
 *			'a':97
 *			面试扩展
 *				a.char a='a'; a+5等于多少 'f'  102
 *				b.大小写转化，A->a  ------  +('a'-'A');
 *
 *	字符串
 *		由'\0'结尾的集合
 *		字符串需要用变量用数组表达；
 *		“”——空串，只有'\0';
 *		
 *
 *	常量和变量
 *		1.常量不能改，只读  如1，2,“abc”，宏
 *		2.变量
 *			可以修改，读写的
 *			明确类型
 *				单位：
 *					最小存储但单元byte（字节）
 *						1byte==8bit
 *						1k==1024byte
 *						1m==1024k
 *						1g==1024m
 *				整型(signed/unsigned)
 *					字符型
 *						signed char 1bite == 8bit   -128～127;
 *						unsigned char 0～255
 *						short 2byte
 *						int 4byte
 *						long 8byte
 *						long long 8byte
 *					整形	int long之类
 *				实型
 *					浮点型
 *				符合类型
 *					结构体
 *					联合体
 *
 * */
#include<stdio.h>
int main(void)
{
	//调用输出的函数
	printf("\t你好!\b世界\n");	

	return 0;
}

//函数最后加一个空行
