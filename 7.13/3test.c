/*1.在屏幕上输出以下图案：
      *
     ***
    *****
   *******
  *********
 ***********
*************
 ***********
  *********
   *******
    *****
     ***
      *
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
        int line = 0;
	scanf("%d", &line);
	int i = 0;
	int j = 0; 
	int k = 0;
	//打印上半部分（正三角）
	for (i = 0; i < line; i++)
	{
		//打印开始的空格
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		//打印*
		for (k = 0; k < i * 2 + 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	//打印下半部分（倒三角）
	for (i = 0; i < line; i++)
	{
		//打印开始的空格
		for (j = 0; j <=i; j++)
		{
			printf(" ");
		}
		//打印*
		for (k = 0; k < 2 * (line - 2 - i) + 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
        system("pause");
	return 0;
}
