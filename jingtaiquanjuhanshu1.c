#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
extern int Add(int x, int y);
int main(){
	int a = 2;
	int b = 4;
	int c = Add(a, b);
	printf("cµÄÖµÎª%d\n", c);
	return 0;
}