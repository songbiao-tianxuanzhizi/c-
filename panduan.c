#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//判断结构，C语言中不含有布尔类型，所以用非0表示真，0表示假
int main(){
	int coding = 0;//coding变量初始化为0
	scanf("%d", &coding);//可以自定义输入变量
	if (coding == 20000)//判断是否为真，真的话执行括号里面的语句，假的话跳出
	{
		printf("%s\n", "走上人生巅峰\n");
	}
	else if (coding == 10)//判断是否为真，真的话执行括号里面的语句，假的话跳出
	{
		printf("%s\n", "回家卖红薯\n");
	}
	else//如果上述都有错误，执行此括号里面的语句
	{
		printf("%s\n", "没救了\n");
	}
	return 0;
}