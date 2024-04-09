#include<stdio.h>

/*
int main(){
	//1、题目：海滩上有一堆桃子，五只猴子来分。第一只猴子把这堆桃子凭据分为五份，多了一个，这只猴子把多的一个扔入海中，拿走了一份。第二只猴子把剩下的桃子又平均 分成五份，又多了一个，它同样把多的一个扔入海中，拿走了一份，第三、第四、第五只猴 子都是这样做的，问海滩上原来最少有多少个桃子？

	int count;
	int temp=0;
	for(int i=1;i<10000;i++){
		count =0;
		temp=i;
		for(int j=0;j<5;j++){
			if((temp-1)%5==0){
				temp=(temp-1)/5*4;
				count++;
				
			}else{
				break;
			}
		}
		
		if(count==5){
		
			printf("i=%d\n",i);
			break;
		}
	}
	printf("count=%d\n",count);

}


*/

/*
//2.809*??=800*??+9*??+1 其中??代表的两位数,8*??的结果为两位数，9*?? 的结果为 3 位数。求??代表的两位数，及 809*??后的结果

int main(){
	int sum=0,sum1=0;
	for(int i=10;i<100;i++){
		sum=i*8;
		sum1=i*9;
		if(sum>10&&sum<100&&sum1>99&&sum1<1000){
			
				printf("809*12=%d\n",809*i);
				printf("800*12+9*12+1=%d\n",800*i+9*i+1);
					printf("i=%d",i);
				
		}
		
	}
}

*/


/*

//3.题目：判断一个素数能被几个 9 整除


int main(){
	int in,p;
	int count=0;
	printf("请输入一个素数\n");
	scanf("%d",&in);
	p=in;
	int i;
	for(i=2;i<p;i++){
		if(p%i==0){
			break;
		}
		
	}
	if(p>i){
		printf("%d不是素数",p);
	}else{
		printf("%d是素数",p);
		for(int j=0;;j++){
			if(p%9!=0&&p!=0){
				count++;
				p=p/9;
			}else{
				break;
			}
		}
		printf("能被%d个数9整除\n",count-1);
		
	}
	

}


*/


/*
//3.题目：判断一个素数能被几个 9 整除

int main(){
	int in=0;
	printf("请输入一个素数\n");
	scanf("%d",&in);
	double i=0;
	int count=0;
	for(i=9;;i=i*10+9){
		if(i%in==0){
			break;
		}
	
	}
	printf("i=%e\n",i);
	//printf("i=%ld\n",i);
	

}

*/



/*
//4.题目：一个偶数总能表示为两个素数之和。

int main(){
	int in;
	int f1=0,f2=0;
	printf("请输入一个偶数\n");
	int i,j=0;
	scanf("%d",&in);
	for(i=2;i<in-1;i++){
		f1=0;
		for(int c=2;c<i;c++){//找第一个素数
			if(i%c==0){
				f1=1;
				break;
			}
		}
		
		
		if(f1==0){
			f2=0;
			j=in-i;
			for(int p=2;p<j;p++){//找第二个素数
				if(j%p==0){
				
					f2=1;
					break;
				}
			
			}
			if(f2==0){
					printf("第一个数是：%d\n",i);
					printf("第二个数是：%d\n",j);
			}
			
		}
		if(f1==0&&f2==0){//只输出一个
			break;
		}	
		
	
	}
}

*/






/*
//5.题目：某个公司采用公用电话传递数据，数据是四位的整数，在传递过程中是加密的，加密规则如下： 
//每位数字都加上 5,然后用和除以 10 的余数代替该数字，再将第一位和第 四位交换，第二位和第三位交换。

int main(){
	int in;
	int arr[3]={0};
	int temp=0,sum=0;
	printf("请输入一个4位数字\n");
	scanf("%d",&in);

	if(in>1000&&in<10000){
		
		arr[0]=in%10;
		arr[1]=in/10%10;
		arr[2]=in/100%10;
		arr[3]=in/1000;
		//for(int i=0;i<4;i++){
		
			//printf("%d\n",arr[i]);
	//	}
		
		
			arr[0]=(arr[0]+5)%10;
			arr[1]=(arr[1]+5)%10;
			arr[2]=(arr[2]+5)%10;
			arr[3]=(arr[3]+5)%10;
			
		
		sum=arr[3]+arr[2]*10+arr[1]*100+arr[0]*1000;
		
		
		printf("加密后的数字是%d",sum);
		
		
	}


}
*/



/*
//6、题目：有 n 个人围成一圈，顺序排号。从第一个人开始报数（从 1 到 3 报数）， 凡报到 3 的人退出 圈子，问最后留下的是原来第几号的那位。

int main(){

	int arr[100]={0};

	int count=0;
	int in=0;
	int k=0;//退出多少人
	int last=0;
	printf("请输入几个人围成一圈\n");
	scanf("%d",&in);
	for(int i=0;i<in;i++){
		
		arr[i]=1;//入圈
	}
	for(;k<in;){
	
	for(int i=0;i<in;i++){
		if(arr[i]==1){
			
			count++;
			if(count%3==0){
				arr[i]=0;
				k++;
				last=i+1;
			}
		}	
		
	}
	
	}
	printf("最后留下来的是：%d\n",last);
	
}
*/

//6、题目：有 n 个人围成一圈，顺序排号。从第一个人开始报数（从 1 到 3 报数）， 凡报到 3 的人退出 圈子，问最后留下的是原来第几号的那位。





/*
//7、题目：有 n 个整数，使其前面各数顺序向后移 m 个位置，最后 m 个数变成最前 面的 m 个数
int main(){
	int in=0;
	int arr[7]={0};
	int move=0;//移动几位
	int p=0;//前面几位
	printf("你要输入7个整数\n");
	
	for(int i=0;i<7;i++){
		scanf("%d",&in);	
		arr[i]=in;
		
	}
	
	for(int i=0;i<7;i++){
		printf("%d\t",arr[i]);
	
	}
	printf("\n");
		
		printf("你想要前面几个数后移几位\n");
		scanf("%d",&p);
		scanf("%d",&move);	
		if((p+move)<=7){
		for(int i=0;i<p;i++){
			int temp=arr[i];
			arr[i]=arr[i+move];
			arr[i+move]=temp;
		
		}
		for(int i=0;i<7;i++){
			printf("%d\t",arr[i]);
		}
		printf("\n");
	}
	
	
	
}
*/



/*
//8.题目：输入数组，最大的与第一个元素交换，最小的与最后一个元素交换，输出数组

int main(){

	int max=0,min=0;
	int in=0;
	int arr[5]={0};
	printf("请输入5个数\n");
	for(int i=0;i<5;i++){
		scanf("%d",&in);
		arr[i]=in;
	}
	
	
	int temp=0;
	for(int i=1;i<5;i++){
		if(arr[i]>arr[0]){
			temp=arr[i];
			arr[i]=arr[0];
			arr[i]=temp;
		}
		
	}
	for(int i=0;i<4;i++){
		if(arr[i]<arr[4]){
			temp=arr[i];
			arr[i]=arr[4];
			arr[4]=temp;
		}
	
	}
	
	for(int i=0;i<5;i++){
		printf("arr[%d]=%d\n",i,arr[i]);
	}
}

*/

/*
//9、题目：对 10 个数进行排序
int main(){
	int arr[10]={1,6,0,9,10,99,3,1,8,12};
	int len= sizeof(arr)/sizeof(arr[0]);
	
	for(int i=0;i<len;i++){
		printf("%d\t",arr[i]);
	}
		printf("\n");
	for(int h=len/2;h>0;h/=2){
		for(int i=h;i<len;i++){
			for(int j=i;j-h>=0;j--){
				if(arr[j]<arr[j-h]){
					int temp=arr[j-h];
					arr[j-h]=arr[j];
					arr[j]=temp;
				}

			}

		}
	}	
	for(int i=0;i<len;i++){
		printf("%d\t",arr[i]);
	}
		printf("\n");


}
*/



/*
//10、八进制转换为十进制
int main(){
	int b=0,n=0;
	int count=0;
	int sum=0;
	int p=1;
	printf("请输入一个八进制\n");
	scanf("%d",&b);
	int temp=b;
	//判断几位数
	while(p){
		b=b/10;
		count++;
		if(b==0){
			p=0;
		}
	}
//	printf("%d\n",count);
	int arr[count];
	int y=0;
	//取出每位数
	for(int i=0;i<count;i++){
			arr[i]=temp%10;
			temp=temp/10;
		if(arr[i]>8){
			//	printf("%d\n",arr[i]);
			printf("你输入的数不对\n");
			y=1;
			break;
		}
	}
//	for(int i=0;i<count;i++){
//			if(y==1){break;}
//		printf("%d\n",arr[i]);
//	}
	int c=1;
	
	//每位数乘8的几次方
	for(int i=0;i<count;i++){
			if(y==1){break;}
		sum=sum+arr[i]*c;
		c=c*8;	
	}
	if(y==0){
		printf("十进制数是：%d\n",sum);
	}
}
*/


//11、题目：将一个正整数分解质因数。例如：输入 90,打印出 90=2*3*3*5。
int main(){
	printf("请输入一个正整数\n");
	int in;
	scanf("%d",&in);
	for(int i=2;i<=in;i++){
		while(in!=1){
			if(in%i==0){
				printf("%d*",i);
				in=in/i;
			}else break;
		}
	}
	printf("%d",in);

}




/*
//12、题目：输入两个正整数 m 和 n，求其最大公约数和最小公倍数。
int main(){
	int z1=0;
	int z2=0;
	int i1=1;
	int max=0,min=0;
	int count=1;
	printf("请输入两个非零正整数,\n");
	scanf("%d",&z1);
	scanf("%d",&z2);
	while(i1){
		min=count*z1;
		for(int j=min;j>0;j--){
			if(min%z2==0){
				i1=0;
				break;
			}
		}
		count++;
	}
	count =1;
	i1=1;
	
	if(z1>z2){
		max=z1;
	}else{
		max=z2;
	}
	for(int i=max;i>0;i--){
		if(z1%i==0&&z2%i==0){
			max=i;
			break;
		}	
	}

	printf("%d和%d最小公倍数是%d\n",z1,z2,min);
	printf("%d和%d最大公约数是%d\n",z1,z2,max);
}

*/
