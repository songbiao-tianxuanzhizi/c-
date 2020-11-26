#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>//strlen库函数包含在<string.h>的头文件当中

//转义字符的使用
int main(){
	//问题一：如何在屏幕打印输出“helloworld”
	printf("%s\n", "\"helloworld\"");//输出结果为“helloworld”
	//问题二：如何在屏幕打印输出单引号 '
	//问题三：如何在屏幕打印输出双引号''
	printf("%s\n", "\'");
	printf("%s\n", "\"");
	return 0;
}