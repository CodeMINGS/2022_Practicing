#include<stdio.h>
//1.给定两个整形变量的值，将两个值的内容进行交换
int main()
{
	int a = 10, b = 15;//声明两个变量并复制初始化
	int t;//临时变量
	t =b;
	b = a;
	a = t;
	printf("%d%d\n", a, b);
	return 0;
}