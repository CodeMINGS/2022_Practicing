/* 创建一个数组，
实现函数init（）初始化数组、
实现empty（）清空数组、
实现reverse（）函数完成数组元素的逆置。
要求：自己设计函数的参数，返回值。 */

#include<stdio.h>
#include<stdlib.h>

int  empty(int a,int b[])//清空数组函数
{
    int i;    
        if(b==NULL)//如果数组为空
        {
            return -1;
        }
    for(i=0;i<a;i++)//用for循环将数组中的每一个元素置为0
    {   
        b[i]=0;
    }

    for(i=0;i<a;i++)//再用一个循环来判断数组中的每一个元素是否都为0
    {               //如果有，则表示没有清空成功
        if(b[i] !=0)
        {
            return -1;
        }        
    }

    return 0;
}

int* init(int a)//初始化函数
{   
    int i;
    int *b=(int*)malloc(a*sizeof(int));//用malloc函数为b数组申请空间
    for(i=0;i<a;i++)
    {
        scanf("%d",&b[i]); //从键盘输入来初始化数组元素  
    }
    for(i=0;i<a;i++)//打印数组中的每一个元素
    {
    printf("%d",b[i]);
    }
    printf("\n");
    return b;
}

int* reverse(int a,int *b)//逆置函数
{   
    int i;
    int temp[50]={0};//定义一个临时变量来保存b数组里面的原始元素
    for(i=0;i<a;i++)//用for循环将b数组中的元素保存到temp数组中
    {        
        temp[i]=b[i];
    }
    int z=0;
    for(i=a-1;i>=0;i--)//再用一个for循环来逆置数组中的元素
    {
        
        b[z]=temp[i];
        z++;
    }
    return b;
}

int main()
{
    int *m=init(5);     

    int *k=reverse(5,m);

    for(int i=0;i<5;i++)
    {
        printf("%d\t",k[i]);
    }
    printf("\n"); 

    printf("%d\n",empty(5,m));    
    return 0;
}