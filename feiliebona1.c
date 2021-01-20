#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//斐波那契函数第二种写法
int fib1(int n)
{
	int f1 = 1;
	int f2 = 1;
	int f3 = 1;
	for (int i = 3; i <= n; i++)
	{
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
	}
	return f3;
}
int main(){
	printf("%d\n", fib1(1));
	return 0;
}