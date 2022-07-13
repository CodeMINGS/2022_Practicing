//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值。
#include<stdio.h>
int main()
{
    
    int b[101]={0};
    int i;
    float sum=0;
    for(i=1;i<=100;i++)
    {
        if(i%2==0)
        {
            b[i]=i*(-1);//负数项
        }
        else
        {
            b[i]=i;//偶数项
        }
        sum=sum+(1/(b[i]*1.0));//求和

    }
    printf("sum= %f\n",sum);
    return 0;

}