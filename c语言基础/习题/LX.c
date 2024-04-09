#include<stdio.h>
/**
1.输入一个五位的正整数，输出其逆数。例如输入12345，输出应为54321。
int main(){
	int i;
	scanf("%d",&i);
	int a=i%10;
	int b=i/10%10;
	int c=i/100%10;
	int d=i/1000%10;
	int e=i/10000;
	printf("%d\n",a*10000+b*1000+c*100+d*10+e);
	return 0;
}
*/
	
/*
2.计算1+2+3…+n的值，n是从键盘输入的自然数。
int main(){
	int i,n=0,sum=0;
	scanf("%d",&i);
	while(n<i){

		n++;
		sum=sum+n;
	}
	else	{printf ("%d是\n",i);}
	printf("%d\n",sum);
*/

/*3.
//从终端（键盘）读入20个数据到数组中，统计其中正数的个数，并计算这些正数之和

int main(){
	int arr[20]={0};
	int in,count=0,sum=0;
	printf("请输入5个数\n");
	for(int i=0;i<20;i++){
		scanf("%d",&in);
		arr[i]=in;
	}
	for(int i=0;i<5;i++){
		if(arr[i]>=0){
			sum+=arr[i];
			count++;
		}
	}
	printf("正数的个数是%d\n正数的和是%d\n",count,sum);
	

}


*/



/*
//4.从终端（键盘）将5个整数输入到数组a中，然后将a逆序复制到数组b中，并输出b中各元素的值。
int main(){
	int arr[5]={0};
	int arr1[5]={0};
	int in;
	int j=4;
	printf("请输入5个数\n");
	for(int i=0;i<5;i++){
		scanf("%d",&in);
		arr[i]=in;
		arr1[j]=arr[i];
		j--;
	}
	for(int i=0;i<5;i++){
		printf("arr[%d]=%d\n",i,arr1[i]);
	}

}

*/

/*
5.
//要将5张100元的大钞票，换成等值的50元，20元，10元，5元一张的小钞票，每种面值至少1张，编程求需要多少张纸币。
int main(){
	int sum=0;
	for(int i=1;i<=10;i++){
		for(int j=1;j<=25;j++){
			for(int x=1;x<=50;x++){
				for(int y=1;y<=100;y++){
					if(i*50+j*20+x*10+y*5==500){
						printf("50元%d张\n",i);
						printf("20元%d张\n",j);
						printf("10元%d张\n",x);
						printf("5元%d张\n",y);
						sum++;
					}
				}
			}
		}
	}
	printf("%d",sum);

	
}

*/

/*
//while 版
//5.要将5张100元的大钞票，换成等值的50元，20元，10元，5元一张的小钞票，每种面值至少1张，编程求需要多少张纸币。
int main(){
	int a=1,b=1,c=1,d=1,sum=0;
	while(a<=10){
		b=1;
		while(b<=25){
			c=1;
			while(c<=50){
				d=1;
				while(d<=100){
				if(a*50+b*20+c*10+d*5==500){
					printf("50元%d张\n",a);
					printf("20元%d张\n",b);
					printf("10元%d张\n",c);
					printf("5元%d张\n",d);
					
					sum++;
					}
					d++;
				}
			c++;
			}
		b++;	
		}
	
		a++;	
	}
}
*/

/*
//do while 版
//5.要将5张100元的大钞票，换成等值的50元，20元，10元，5元一张的小钞票，每种面值至少1张，编程求需要多少张纸币。

int main(){
	int a=1,b=1,c=1,d=1,sum=0;
	do{
		b=1;
		do{
			c=1;
			do{
				d=1;
				do{
				if(a*50+b*20+c*10+d*5==500){
					printf("50元%d张\n",a);
					printf("20元%d张\n",b);
					printf("10元%d张\n",c);
					printf("5元%d张\n",d);
					
					sum++;
					}
					d++;
				}while(d<101);
			c++;
			}while(c<51);
		b++;	
		}while(b<26);
	
		a++;	
	}while(a<11);
	
	printf("sum=%d",sum);//有几种组合
}
*/






/*
//6

#include<math.h>
int main(){
	int n;
	float p=0;
	printf("请输入一个数\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		
		if(i%3==0&&i%7==0){
			 p=sqrt(i);
			 printf("%f\n",p);
		}
	}
}
*/



/*
//7.

int main(){
	for(int i=1000;i<10000;i++){
		if(i%10==i/10%10){
			if(i/100%10==i/1000){
				//printf("%d",i);
				sum=i;
				for(int j=32;j<100;j++){
					if(j*j==sum){
						printf("车牌号为%d\n",sum);
					}
				}
			}
	//	printf("个位%d\n十位%d\n百位%d\n千位%d\n",g,s,b,q);
		
		}
	}

	return 0;
}
*/


/*
9.个位数为6且能被3整除但不能被5整除的三位自然数共有多少个，分别是哪些？
int main(){
	int count=0;
	for(int i=100;i<1000;i++){
		if(i%10==6){
			if(i%3==0&&i%5!=0){
				printf("%d\t",i);
				count++;
				}
		}
	}
	printf("\n共有%d\n",count);
				
	return 0;	
}
*/


/*
//10.输入某年某月某日，判断这一天是这一年的第几天？
int main(){
	int arr[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	
	int year=0,monch=0,day=0;
	int sum=0;
	printf("请输入年、月、日\n");
	scanf("%d%d%d",&year,&monch,&day);
	if(year%400==0||year%4==0&&year%100!=0){
		arr[2]=arr[2]+1;
	
	}
	for(int i=0;i<monch;i++){
		sum=sum+arr[i];
	}
	sum+=day;
	
	printf("这一天是这一年的第%d天\n",sum);

}

*/


/*
//14.输入10个数，分别统计其中正数、负数、零的个数。
int main(){
	int p;
	int f=0,z=0,o=0;
	for(int i=0;i<10;i++){
	
		scanf("%d",&p);
		if(p==0){
			o++;
		}
		else if(p>0){	z++;}
		else { f++;}
	}
	printf("正数个数%d,负数个数%d,零个数%d",z,f,o);
	return 0;
}
*/



/*
#include<stdlib.h>
#include<time.h>
int main(){
	//15.先随机产生N个三位自然数输出，然后再输出其中同时是3、5、7倍数的数。（设N为100）
	srand((unsigned int)time(NULL));
	int ret[100];
	for(int i=0;i<100;i++){
		ret[i]=rand()%901+100;
		if(ret[i]%3==0&&ret[i]%5==0&&ret[i]%7==0){
			printf("%d\n",ret[i]);
		}
	}
}
*/


/*
16.
int main(){
	for(int i=10;i<=14;i++){
		if(i*i>100&&i*i<200){
			printf("完全平方数%d\n",i);
		}
	}
}
*/


/*
17. 13.	
int main(){
	int a,b,c;
	printf("请输入三个数");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c||b+c>a||c+a>b)
	{
		if((a*a)+(b*b)==(c*c)||(b*b)+(c*c)==(a*a)||(a*a)+(c*c)==(b*b))
			{printf("%d%d%d是直角三角形\n",a,b,c);}
		else if(a==b==c)
			{printf("是等边三角形\n");}
		else if(a==b||a==c||b==c)
			{printf("是等腰三角形\n");}
		else	
			{printf("是其他三角形\n");}
		


	}
	else
	{
		printf("不是三角形");

	}
}

*/



/*
21.
void data(){
	
	int j;
	for(int i=100;i<1000;i++){
		for( j=2;j<i;j++){
			if(i%j==0){
				break;
			}
		
		}
	if(i==j){printf("%d是\n",i);}
	}
	
}

int main(){
	data();
}

*/


/*
//30.从键盘输入10个战士的身高，输出平均身高，并找出哪些身高低于平均身高。
int main(){

	float arr[10]={0};
	float a=0;
	float sum=0;
	printf("请输入10个战士的身高\n");
	for(int i=0;i<10;i++){
		scanf("%f",&arr[i]);
		sum+=arr[i];
	}
	a=sum/10;
	printf("平均身高是%lf",a);
}
*/

/*
//31.从键盘输入10个战士的身高，输出平均身高，并找出哪些身高高于平均身高

int main(){

	float arr[10]={0};
	float a=0;
	float sum=0;
	int count=0;
	printf("请输入10个战士的身高\n");
	for(int i=0;i<10;i++){
		scanf("%f",&arr[i]);
		sum+=arr[i];
	}
	a=sum/10;
	
	for(int i=0;i<10;i++){
		if(arr[i]>a){
			count++;
			printf("高于平均身高的是%lf\n",arr[i]);
		}
	}
	printf("高于平均身高的共有：%d\n",count);
	printf("平均身高是%lf",a);
}
*/





/*

32.
int main(){
	float p;
	float arr[10];
	for(int i=0;i<10;i++){
		scanf("%f",&p);
		arr[i]=p;
	}
	float max=0,min;
	for(int i=0;i<10;i++){
		if(arr[i]>max){
			max=arr[i];
			
		}
		if(arr[i]<min){
			min=arr[i];
		}
	}
	printf("最大值%f,最小值%f",max,min);
}


/*




/*


//33.“百钱百鸡”问题。百钱买百鸡，鸡翁一值钱三，鸡母一值钱二，鸡雏三值钱一，问鸡翁、鸡母、鸡雏各几何？
int main(){
	int i=0;
	int j=0,m=0,c=0;
	for(j=0;j<34;j++){
		for(m=0;m<51;m++){
			for(c=0;c<=100;c++){
				if((j+m+c==100)&&(i*3+m*2+c/3==100))
				{
					printf("j=%d\n",j);
					printf("m=%d\n",m);
					printf("c=%d\n",c);
					i++;
				}
			}
		}
	}
	printf("i=%d\n",i);
	return 0;
}

*/




	//“百钱百鸡”问题。百钱买百鸡，鸡翁一值钱三，鸡母一值钱二，鸡雏三值钱一，问鸡翁、鸡母、鸡雏各几何？
	//while循環版
int main(){
	int sum=0;
	int x=0,y=0,z=0;
	while(x<34){
		y=0;
		while(y<51){
			z=0;
			while(z<101){
				if((x+y+z==100)&&x*3+y*2+z/3==100)
				{
					printf("x=%d\n",x);
					printf("y=%d\n",y);
					printf("z=%d\n",z);
					sum++;
				}
				z+=3;
			
			}
			y++;
			
		}
		x++;
		
	}
	printf("sum=%d",sum);
}




/*
//“百钱百鸡”问题。百钱买百鸡，鸡翁一值钱三，鸡母一值钱二，鸡雏三值钱一，问鸡翁、鸡母、鸡雏各几何？
	//do while循環版
int main(){
	int sum=0;
	int x=0,z=0,d=0;
	do{
		z=0;
		do{
			d=0;
			do{
				if((x+z+d==100)&&(x*3+z*2+d/3==100)){
					printf("x=%d\n",x);
					printf("z=%d\n",z);
					printf("d=%d\n",d);
					sum++;
				}
				
				d+=3;
			}while(d<100);
			z++;
			
		}while(z<50);
		x++;
	}while(x<30);
	printf("sum=%d",sum);
}
*/
/*
//42

int main(){
	int g,s,b,q;
	for(int i=1000;i<10000;i++){
		g=i%10;
		s=i/10%10;
		b=i/100%10;
		q=i/1000;
		if((i*9)==(g*1000+s*100+b*10+q)){
			printf("整数是：%d\n",i);
			printf("i*9=%d\n",i*9);
			printf("g=%d\n",g);
			printf("s=%d\n",s);
			printf("b=%d\n",b);
		}
	}
}
*/




/*
//43
int main(){
	int x=0,i;
	while(i==0){
		x++;
		if(x%2==1&&x%3==2&&x%5==4&&x%6==5&&x%7==0){
			printf("x=%d",x);
			i=1;
		}
		x++;
	}

}
*/





/*
//48.求1+12+123+……前n项之和，其中n是从键盘输入的一个数字（1~9）。
int main(){
	int index;
	int sum=0,i=1;
	scanf("%d",&index);
	while(i<=index){
		sum=sum+(sum*10+i);
		i++;
	}
	printf("%d",sum);
}
*/



/*
//49.随机生成10道100以内的加减乘除数学题 回答正确的加10分错误不加分 然后显示成绩 
#include<stdlib.h>
#include<time.h>
int main(){
	srand((unsigned int)time(NULL));
	int value;
	int arr[10]={0};
	int arr1[10]={0};
	int arr2[10]={0};
	for(int i=0;i<4;i++){
	
		arr2[i]=rand()%4;
		
	}
	for(int i=0;i<10;i++){
	
		arr[i]=rand()%101;
		arr1[i]=rand()%101;
	}
	
	int sum;

	for(int i=0;i<10;i++){
		if(arr2[i]==0){
			sum=arr[i]+arr1[i];
			printf("请输入%d+%d=?",arr[i],arr1[i]);
		
			
		}else if(arr2[i]==1){//-
			sum=arr[i]-arr1[i];
			printf("请输入%d-%d=?",arr[i],arr1[i]);
			
	
		}else if(arr2[i]==2){//-
			sum=arr[i]*arr1[i];
			printf("请输入%d*%d=?",arr[i],arr1[i]);
			
	
		}else{
			if(arr1[i]!=0){
				sum=arr[i]/arr1[i];
				printf("请输入%d/%d=?",arr[i],arr1[i]);
				}
		}
		scanf("%d",&value);
			
		if(value==sum){
			printf("恭喜你答对了\n");
		}else{
			printf("你答错了，重新来过\n");
		
		
		}
	}
}

*/



/*
//49.随机生成10道100以内的加减乘除数学题 回答正确的加10分错误不加分 然后显示成绩 。
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(NULL));
	int arr[3]={0};
	int value=0;
	for(int i=0;i<10;i++){
		arr[0]=rand()%101;
		arr[1]=rand()%101;
		arr[2]=rand()%4;
		
		
		if(arr[2]==0){//+
			int sum=arr[0]+arr[1];
			printf("请输入%d+%d=?",arr[1],arr[0]);
			scanf("%d",&value);
			if(value==sum){
				printf("恭喜你答对了\n");
			}
			else{
				printf("你答错了\n");
			}
		}
		else if(arr[2]==1){//-
			int sum=arr[1]-arr[0];
			printf("请输入%d-%d=?",arr[1],arr[0]);
			scanf("%d",&value);
			if(value==sum){
				printf("恭喜你答对了\n");
			}
			else{
				printf("你答错了\n");
			}
		}else if(arr[2]==2){//*
			int sum=arr[1]*arr[0];
			printf("请输入%d-%d=?",arr[1],arr[0]);
			scanf("%d",&value);
			if(value==sum){
				printf("恭喜你答对了\n");
			}
			else{
				printf("你答错了\n");
			}
		}else{//除
			if(arr[1]!=0){
				int sum=arr[0]/arr[1];
				printf("请输入%d/%d=?",arr[0],arr[1]);
				scanf("%d",&value);
				if(value==sum){
					printf("恭喜你答对了\n");
				}
				else{
					printf("你答错了\n");
				}
			}
		}
		
	}
	
	
}


*/


/*
//50.有1024发子弹 要提前装道10箱子里面，接收键盘输入，要取多少颗子弹数，只能显示整箱的个数，问这10个箱子怎么装（定义一个数组10个元素，分别装子弹的个数，比如取走100发子弹 程序运行结果，比如2箱） 

int main(){
	
	int arr[10]={0};
	int in=0,box=0;
	int x=1;
	for(int i=0;i<10;i++){
		arr[i]=x;
		printf("第%d箱的子弹数是%d\n",i+1,arr[i]);
		x=x*2;
	
	}
	printf("请输入要取的子弹数:");	
	scanf("%d",&in);
	int temp=in;
	for(int i=9;i>=0;i--){
		if(temp>arr[i]){
			temp=temp-arr[i];
			printf("取出的子弹数是：%d\n",arr[i]);
			box++;
		}
		if(temp==0){
			break;
		}
	}
	printf("一共取出%d箱\n",box);
	
}

*/
