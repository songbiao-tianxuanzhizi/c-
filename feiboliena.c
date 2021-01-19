#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//斐波那契函数第一种写法
int fib(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		return fib(n - 1) + fib(n - 2);
	}
}
int main(){
	printf("%d\n",fib(4));
	return 0;
}