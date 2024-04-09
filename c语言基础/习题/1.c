#include<stdio.h>
int main(){
	//50.有1024发子弹 要提前装道10箱子里面，接收键盘输入，要取多少颗子弹数，只能显示整箱的个数，问这10个箱子怎么装（定义一个数组10个元素，分别装子弹的个数，比如取走100发子弹 程序运行结果，比如2箱） 
	
	
	int arr[10]={0};
	int box=0;
	int x=1;
	for(int i=0;i<10;i++){
		arr[i]=x;
		x=x*2;//2的1次方
		printf("第%d箱的子弹数量是%d\n",i+1,arr[i]);
	}
	//printf("%d\n",x);
	
	
	int in;
	printf("取多少子弹\n");
	scanf("%d",&in);
	for(int i=9;i>=0;i--){
		if(in>=arr[i]){
			in = in-arr[i];
			box++;
			printf("取出第%d箱的子弹数量是%d\n",i+1,arr[i]);
		}
		if(in==0) break;
	
	}
	printf("用了%d箱\n",box);



}
