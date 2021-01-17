#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//函数的嵌套调用与链式调用
int Max(int a, int b)
{
	return a > b ? a : b;
}
int Max1(int a, int b, int c)
{
	/*int max1 = Max(a, b);
	int max2 = Max(max1, c);
	return max2;*///此处为嵌套调用

	return Max(Max(a, b), c);//此处为链式调用，即调用的某个函数的返回值可以作为下一次某个函数调用的参数
}
int main(){
	int a = Max1(7, 5, 8);
	printf("最大的数为%d",a);
	return 0;
}