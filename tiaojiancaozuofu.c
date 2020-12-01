#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(){
	int a = 1;
	int b = 0;
	int c = 1;
	int d = a ? (b == 1 ? c : a) : c;
	printf("d的值为%d\n", d); //执行结果为1
	return 0;
}