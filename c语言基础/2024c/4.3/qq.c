#include <stdio.h>
#include <string.h>
int main (void)
{
		int y,m,d;
		int num,sum;
		int u;
		printf("请输入年-月-日：");
		scanf("%d-%d-%d",&y,&m,&d);
		for (int i=1970;i<y;i++)
		{
				if(i % 4 == 0 && i %100 != 0 || i %400 == 0)
				{
						sum++;
						sum+=365;
    					printf("sum=%d\n",sum);
				}
		}
		switch(m)
		{
		     case 1:
                num = d;
                break;
       		 case 2:
                num = d + 31;
                break;
       		 case 3:
                num = d + 31 + 28;
                break;
       		 case 4:
                num = d + 31 + 28 + 31;
                break;
       		 case 5:
                num = d + 31 + 28 + 31 + 30;
                break;
        	case 6:
                num = d + 31 + 28 + 31 + 30 + 31;
                break;
       		case 7:
                num = d + 31 + 28 + 31 + 30 + 31 + 30;
                break;
       		case 8:
                num = d + 31 + 28 + 31 + 30 + 31 + 30 + 31;
                break;
   		     case 9:
                num = d + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
                break;
       		 case 10:
                num = d + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
                break;
        case 11:
                num = d + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
                break;
        case 12:
                num = d + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
                break;
    }
//    if(y % 4 == 0 && y %100 != 0 || y %400 == 0)
//    {
//        num++;
//		printf("%d\n",num);
//    }
	sum=sum+num;
	u=(sum+4)%7;
	printf("==============================i=======================\n");
	printf("周日	周一	周二	周三	周四	周五	周六\n");
	for(int i = 0;i < u; i++)
	{
		printf("\t ");
	}

		return 0;
}
