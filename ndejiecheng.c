#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����n�Ľ׳�forѭ��ʵ��
int Sub(int n)
{
	int sum = 1;
	for (int i = n; i >= 1; i--)
	{
		sum = sum*i;
	}
	return sum;
}
int main(){
	int b = 0;
	printf("������һ���������������Ľ׳�\n");
	scanf("%d", &b);
	int a = Sub(b);
	printf("�׳�Ϊ%d\n",a);
	return 0;
}