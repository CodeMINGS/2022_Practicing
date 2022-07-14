//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
//例如：2+22+222+2222+22222
#include<stdio.h>

int main()
{
    int s=0;
    int arr[5]={0};//用数组来保存这五个数
    int a,i;
    int sum=0;

    printf("请输入一个数a:\n");
    scanf("%d",&a);
    for(i=0;i<5;i++)
    {
        
        s=s*10+a;//关键代码 求每一项的数
        arr[i]=s;//将每一项的数存入数组中
        printf("%d\t",arr[i]);
        sum=sum+s;//计算前五项的和
        
    }
    printf("它们的和sum= %d\n",sum);//最后 输出它们的和

    return 0;
}