#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//静态局部变量举例
void Test()//创建一个Test函数
{
    static int i = 0;
	i++;
	printf("%d\n",i);
}
int main365(){
	int i = 0;
	for (; i < 10; i++)
	{
		Test();//Test的调用
	}
	return 0;
}