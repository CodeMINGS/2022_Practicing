//1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9*9口诀表，输入12，输出12*12的乘法口诀表。
#include<stdio.h>
int multiply(int a)
{   int i,j;
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d*%d=%d\t",j,i,j*i);
        }
        printf("\n");
    }
    return 0;
}

int main()
{
    int a;
    printf("请输入一个整数：\n");
    scanf("%d",&a);
    multiply(a);
    return 0;
}