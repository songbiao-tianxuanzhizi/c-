#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
extern int global;//此时会在我的整个工程的.c文件中找我的global变量

int main(){
	int a = 10;
	int b = a + global;
	printf("global的值为%d\n", global);//此时我们在另一个.c文件中找到了我们的global变量，输出值为10
	printf("b的值为%d\n",b);
	return 0;
}