#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main(){
	int a = 10;
	int b = 20;
	int c = 30;
	int d = (10, 20, 30,40,50);
	printf("d的值为%d\n", d);//此时d的值为50，原因是整个逗号表达式的结果为逗号表达式的最后一个表达式的结果，牢记即可
	return 0;
}