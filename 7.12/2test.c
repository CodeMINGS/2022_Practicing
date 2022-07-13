#include<stdio.h>
 //将数组A中的内容和数组B中的内容进行交换。（数组一样大）
int main()
{
    int a[]={1,2,3,4,5};
    int b[]={6,7,8,9,10};
    int temp[]={0};//临时变量
    int i;
    for(i=0;i<5;i++)
    {
        temp[i]=a[i];
        a[i]=b[i];
        b[i]=temp[i];
        printf("%d %d\n",a[i],b[i]);
    }
    

   return 0; 
}