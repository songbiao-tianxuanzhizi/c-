#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//按址传递
void Swap(int* pa, int* pb)
{
	int temp=0;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}
int main(){
	int a = 10;
	int b = 20;
	printf("交换前的值为%d%d\n", a, b);
	Swap(&a, &b);
	printf("交换后的值为%d%d\n", a, b);
	return 0;
}