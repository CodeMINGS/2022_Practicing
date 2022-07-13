#include<stdio.h>
//求10 个整数中最大值
int main()
{
    int a[10]={0};//定义一个长度为10的整型数组
    int i;//i用来循环
    int max=0;
    printf("请输入10个整数:\n");
    
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]); //将输入的数存入数组中   
    }
    for(i=0;i<10;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
     printf("max= %d\n",max);
    return 0;   
}