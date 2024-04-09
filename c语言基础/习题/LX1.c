#include<stdio.h>
#include<stdlib.h>
#include<time.h>


/*
int main(){

//1、猜数字，系统随机产生100以内，猜数字是几，如果猜大了，提示猜大了请往小猜，如果猜小了提示请往大猜 ，如果猜对了，提示对了。
	srand((unsigned int)time(NULL));
	int ret=rand()%100;
	int value;
	int  a=1;
	printf("猜数字\n");
	while(a){
		scanf("%d",&value);
		if(value>ret)
			printf("你猜大了\n");
		else if(value<ret)
			printf("你猜小了\n");
		else{
			printf("你猜对了\n");a=0;}
	}
}

*/


/*
int main(){

//2题目:一个 5 位数,判断它是不是回文数。即 12321 是回文数,个位与万位相同, 十位与千位相同。
	int index;
	int g=0,s=0,b=0,q=0,w=0;
	scanf("%d",&index);
	g=index%10;
	s=index/10%10;
	b=index/100%10;
	q=index/1000%10;
	w=index/10000;
	if(index>9999&index<100000){
		if(g==w&s==q)
			printf("%d是回文\n",index);
		else
			printf("%d不是回文\n",index);
	}else{
		printf("输入错误,请输入5位数字");
	}
	
}

*/

/*
//3
int main(){
	printf("请输入两个整数\n");
	int index,i=0;
	int arr[2];
	while(i<2){
		scanf("%d",&index);
		arr[i]=index;
		i++;
	}

	if(arr[0]>arr[1])
		printf("大数%d\n",arr[0]);
	else if(arr[0]==arr[1])
		printf("%d\t%d\n",arr[0],arr[1]);
	else
		printf("大数%d\n",arr[1]);

}

*/


/*
//4.题目:打印出所有的“水仙花数”,所谓“水仙花数”是指一个三位数,其各位数字 立方和等于该数 
int main(){
	int g=0,s=0,b=0;
	for(int i=100;i<1000;i++){
		g=i%10;
		s=i/10%10;
		b=i/100;
		if(g*g*g+s*s*s+b*b*b==i)
			printf("%d\n",i);
	}
}
*/




/*
	
//5.题目:有 1、2、3、4，4 个数字,能组成多少个互不相同且无重复数字的三位数? 都是多少?
int main(){
	int count=0;
	int g,s,b;
	for(int i=100;i<433;i++){
		g=i%10;
		s=i/10%10;
		b=i/100;
		if(g!=s&&g!=b&&s!=b&&g<5&s<5&&b<5&&g>0&&s>0&&b>0){
			printf("%d\t",i);
			count++;
		}
	}

	printf("\ncount=%d",count);

}

*/

/*
//6、一个整数，它加上 100 后是一个完全平方数，再加上 168 又是一个完全平方数，请问该数是多少？

#include <stdio.h>
#include <math.h>
int main()
{
	int i=0;
	int x=0;
	int y=0;
	for(i=1;;i++)
	{
		x=(int)sqrt(i+100);
		y=(int)sqrt(i+168);
		if(x*x==i+100 && y*y==i+168)
		{
			printf("i=%d\n",i);
			printf("x=%d\n",x);
			printf("y=%d\n",y);
			printf("i+100=%d\n",i+100);
			printf("i+268=%d\n",i+168);
			break;
		}
	}

	return 0;
}

*/


/*
//7.输入某年某月某日，判断这一天是这一年的第几天？
int main(){
	int year,month,day,day1,sum=0;
	printf("请输入年份\n");
	scanf("%d",&year);
	printf("请输入月份\n");
	scanf("%d",&month);
	printf("请输入日期\n");
	scanf("%d",&day1);
	if(month>0&&month<13){
	for(int i=1;i<month;i++){
		if(year%4==0&&year%100!=0||year%400==0){
				if(i==2){
				
					day=29;
				}else if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
					day=31;
				}else{
					day=30;
				}
			}else{
				if(i==2){
					day=28;
				}else if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
					day=31;
				}else{
					day=30;
				}

			}
  			
			sum+=day;
		}
	
	}else{		
		printf("你输入错误");
	}
		printf("%d",sum);
		sum=sum+day1;

		printf("\n这一天是这一年的%d天",sum);

}

*/


/*
//8。输入三个整数 x,y,z，请把这三个数由小到大输出。
int main(){
	int a,s,d;
	int index;
	for(int i=0;i<3;i++){
		scanf("%d",&index);
		if(i==0)a=index;
		else if(i==1)s=index;
		else d=index;
	}
	if(a>s){
		if(d>s)	printf("%d\t%d\t%d\n",s,d,a);
		else	printf("%d\t%d\t%d\n",d,s,a); 
			
	}else if(a<d)	printf("%d\t%d\t%d\n",a,d,s);
	else	printf("%d\t%d\t%d\n",d,a,s); 
}

*/


/***
9.
古典问题：有一对兔子，从出生后第 3 个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少
设兔子为小，中，老兔子；
		小	中	老
1月	 	1	0	0		1月+2月=3月	2月+3月=4月（2月+1月+2月=4月）
2月	 	0	1	0		设1月为a=1，2月b=1，3月=a+b=2，设3月=b,,2月=a
3月		1	0	1		4月=2月a+3月b=3		令b=4月，a=3月		**往后顺推	
4月		1	1	1		
5月		2	1	2		5月=4月b+3月a
6月		3	2	3
//9

int main(){
	int a=1,b=1,sum;
	printf("第1个月兔子为1对\n");
	printf("第1个月兔子为1对\n");

	for(int i=3;i<13;i++){
		 sum=a+b;
		 printf("第%d月的兔子为%d只\n",i,sum);
		 a=b;
		 b=sum;
	}
}
*/




/*
//10.一球从 100 米高度自由落下，每次落地后反跳回原高度的一半；再落下， 求它在第 10 次落地时，共经过多少米？第 10 次反弹多高？

int main(){
	float sum=0,i=100.00;
	int p=0;
	while(p<9){
		i=i/2;
		if(p==9)
		{
			printf("第九次%f\n",i);
		}
		sum=sum+2*i;
		p++;
	}
	printf("共经过%f米\n",sum);
	
}

*/



//11.猴子吃桃问题：猴子第一天摘下若干个桃子，当即吃了一半，还瘾，又 多吃了一个第二天早上又将剩下的桃子吃掉一半，又多吃了一个。以后每天早上都吃了前一天剩下 的一半零一个。到第 10 天早上想再吃时，见只剩下一个桃子了。求第一 天共摘了多少？
int main(){
	int p=9;
	int sum=1;

	while(p>0){
		sum=(sum+1)*2;
		p--;
	}
	printf("%d",sum);
}


/*
//12.求 1+2!+3!+...+20!的和
int main(){

	long  sum=0,t=1;
	for(int i=1;i<=20;i++){
		t*=i;
		sum+=t;
		printf("i=%d,sum=%ld\n",i,sum);
	}
	
}

*/
