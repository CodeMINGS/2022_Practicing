//使用函数实现两个数的交换。
#include<stdio.h>
int exchange(int *a,int *b)
{   //用异或的方式交换两个数的值
    *a=(*a)^(*b);
    *b=(*b)^(*a);
    *a=(*a)^(*b);
}

int main()
{
    int a,b;
    printf("请输入两个整数：\n");
    scanf("%d%d",&a,&b);//从键盘输入两个数
    exchange(&a,&b);//因为形不改实 需要将它们的地址一块传入函数中才能实现调用
    printf("两数交换之后的结果为：%d %d\n",a,b);
    return 0;
}