#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//计算n的阶乘for循环实现
int Sub(int n)
{
	int sum = 1;
	for (int i = n; i >= 1; i--)
	{
		sum = sum*i;
	}
	return sum;
}
int main(){
	int b = 0;
	printf("请输入一个数，并计算它的阶乘\n");
	scanf("%d", &b);
	int a = Sub(b);
	printf("阶乘为%d\n",a);
	return 0;
}