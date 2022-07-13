#include<stdio.h>
//打印九九乘法表
int main()
{
    int i,j;
    for(i=1;i<10;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%dx%d=%d\t",j,i,j*i);
        }
        printf("\n");
    }
    
}
