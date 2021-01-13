#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int getMax(int x, int y)
{
	return x > y ? x : y;
}
int main(){
	int num1 = 10;
	int num2 = 20;
	int max = getMax(num1, num2);
	printf("max=%d\n",max);
	return 0;
}