#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(){
	int a = 10;
	int b = 20;
	int c[3] = { 1, 2, 4 };
	printf("%d\n",&a);
	printf("%d\n",&b);
	printf("%d\n",&c[0]);
	printf("%d\n",&c[1]);
	printf("%d\n",&c[2]);
	return 0;
}