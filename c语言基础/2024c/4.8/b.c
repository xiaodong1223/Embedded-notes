/*#include <stdio.h>
void prn(int a, int b, int c, int max, int min)
{ 
	max=(max=a>b?a:b)>c?max:c;//这里有优先级的关系
	min=(min=a<b?a:b)<c?min:c;//
	printf("max=%d    min=%d\n",max,min);//23 -4
}
int main()
{
	int x,y;
	x=y=0; 
	prn(19,23,-4,x,y);
	printf("max=%d    min=%d\n",x,y); // 0,0
}

*/
/*
#include<stdio.h>
int i=0;
int f ( int x )
{
static int k = 1 ;

printf("k=%d\n", k);
x+=k++;
printf("k=%d\n", k);
return k ;
}
int main()
{
i+=f (f ( 1 ) );
printf(" %d\n", i );  // 4
}
*/

/*
#include<stdio.h>
	int func(int a, int b)
	{
int c;
c=a+b;
	   	return c;
	}
int main( )
	{
int x=6,y=7,z=8,r;
	   	r=func((x--, y++, x+y), z--);
	   	printf("%d\n", r);
return 0;
	}
i*/

#include<stdio.h>
int func(int a, int b);
int main( )
{
int k=4,m=1,p;
p=func(k, m);
printf("%d,", p);//8
p=func(k, m);	//9
printf("%d\n", p);
return 0;
}
int func(int a, int b)
{
static int m=0,i=2;
i+=m+1;
m=i+a+b;
return m;
}

