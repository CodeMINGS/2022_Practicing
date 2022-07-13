//打印100~200之间的素数
#include<stdio.h>
#include<math.h>
int main()
{
    int i=100,j=2;
    int flag=0;//标志位
    for(i=100;i<200;i++)//遍历
    {
        for(j=2;j<i;j++)
        {
            if(i%j!=0)
            {
                flag++;  
            }
            else
            {
                break;
            }
        }

        if(flag+2==i)
        {
        printf("%d\t",i);    
        }
        flag=0;
    } 
    return 0;
}
