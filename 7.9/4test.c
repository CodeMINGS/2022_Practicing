#include<stdio.h>
//将三个数按从大到小输出
int main()
{   
    int a,b,c,t;
    printf("请输入三个整数：\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b)
    {
        t=a;
        a=b;
        b=t;
    }
    if(a<c)
    {
        t=a;
        a=c;
        c=t;
    }
    if(b<c)
    {
        t=b;
        b=c;
        c=t;
    }

    printf("三个数从大到小排列为：%d%d%d\n",a,b,c);
    return 0;

}