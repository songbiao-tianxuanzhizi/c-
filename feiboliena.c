#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//쳲�����������һ��д��
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