#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Swap2(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	int a = 10;
	int b = 20;
	printf("����ǰ��ֵΪ%d%d\n", a, b);
	Swap2(&a, &b);
	printf("�������ֵΪ%d%d\n", a, b);
	return 0;
}