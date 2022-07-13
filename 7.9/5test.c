//求两个数的最大公约数
#include<stdio.h>
int main()
{
    int a,b;
    int t=1;//余数
    printf("请输入两个整数：\n");
    scanf("%d%d",&a,&b);
    if(a==b)
    {
        t=a=b;
    }
    //辗转相减法
    /*while (a != b)
    {
        if(a>b)
        {
            a=a-b;
            t=a;
        }else
        {
            b=b-a;
            t=b;
        }
       
    }
    printf("它们的最大公约数为：%d\n",t);
    return 0;
*/

    //辗转相除法
    if(b>a)
    {  
        a=a+b;
        b=a-b;
        a=a-b;
    }
    if(a%b==0)
    {
        printf("它们的最大公约数为：%d",b);
        return 0;
    }
    while(t!=0)
    { 
        t=a%b;
        a=b;
        b=t;
    }
    printf("它们的最大公约数为：%d\n",t);
    return 0;
    
}