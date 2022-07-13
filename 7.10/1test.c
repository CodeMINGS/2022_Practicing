// 判断1000年---2000年之间的闰年
#include<stdio.h>
int main()
{
    int y;
    for(y=1000;y<=2000;y++)
    {
        if((y%4==0 && y%100 !=0)||(y%400==0))
        {
            printf("%d是闰年\n",y);
        }
        else
        {
            printf("%d不是闰年\n",y);
        }
    }
    return 0;
}