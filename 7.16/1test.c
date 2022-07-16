#include<stdio.h>

//递归和非递归分别实现求第n个斐波那契数。
//斐波那契数列如下：1，1，2，3，5，8，13，21，34. . . . . 


// int Fibonacci(int n)//递归方式
// {
//     if(n<=2)
//     {
//         return 1;
//     }
//     else return Fibonacci(n-1)+Fibonacci(n-2);
// }
    

// int main()
// {
//     int ret=Fibonacci(10);
//     printf("%d\n",ret);
//     return 0;
// }





int main()//非递归方式
{
    int n, i;
    scanf("%d", &n);

    int a[200] = { 0 };
    a[0] = 1;
    a[1] = 1;

    for ( i = 2; i <= n; i++)
    {
        
        a[i] = a[i - 1] + a[i - 2];

        printf("%d\n", a[i]);
    }
    
    return 0;
}

