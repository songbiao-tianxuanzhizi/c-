#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(){
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)//此时没有输出结果，原因是此时k=0，判断为假，不执行循环内部的break语句
		k++;
	return 0;
}