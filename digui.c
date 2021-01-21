#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Print(int n)
{
	if (n > 9)
	{
		Print(n/10);
		printf("%d\n", n % 10);
	}
	else
	{
		printf("%d\n", n % 10);
	}
}
int main(){
	int num = 1234;
	Print(num);
	return 0;
}