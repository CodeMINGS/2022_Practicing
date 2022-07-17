
#include<stdio.h>
//编写一个函数实现n^k，使用递归实现
int Mi(int n, int k)
{//分情况讨论
    if (k == 0)//第一种情况
    {
        return 1;
    }
    else if (k == 1)//第二种情况
    {
        return n;
    }
    else//第三种情况
    {
        return ( n*Mi(n, k-1));
    }
}

int main()
{
    int n, k;
    printf("请输入整数n和它的幂次k\n");

    scanf("%d%d", &n, &k);//从键盘输入

    int ret = Mi(n, k);//调用函数
    
    printf("%d\n", ret);//打印结果
    return 0;
}