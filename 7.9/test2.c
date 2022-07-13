#include<stdio.h>
//2. 不允许创建临时变量，交换两个数的内容（附加题)
int main()
{
	int a = 10, b = 15;
	a = a ^ b;
	b = b ^ a;
	a = a ^ b;
	printf("%d\n", a);
	printf("%d\n", b);
	return 0;
}