#include<stdio.h>
//编写程序数一下 1到 100 的所有整数中出现多少个数字9。
int main()

{
    int i,count=0,sum=0;
    int b[101]={0};
    for(i=1;i<=100;i++)
    {
        b[i]=i;
        if((b[i]/10==9))//如果数的第一位是9
        {
            sum=sum+1;
            printf("%d\n",b[i]);
        }
        if((b[i])%10==9)//如果数的个位数字是9
        {
        count=count+1;
        printf("%d\n",b[i]);
        }
    }

    printf("共有%d个数字9。\n",count+sum);
    return 0;
}