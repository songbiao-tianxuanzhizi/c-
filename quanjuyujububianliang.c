#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int b = 15;//此时b为全局变量，写代码尽量不要写全局变量
int main(){

	int c = 20;//局部变量
	int b = 30;//此时b为局部变量
	printf("变量b的输出结果为%d", b);//输出结果为30，因为局部变量优先使用
	return 0;
}