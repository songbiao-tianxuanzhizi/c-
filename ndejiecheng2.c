#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//n�Ľ׳��ۼӵ�ʵ��
int Sub1(int n)
{
	int sum = 1;
	for (int i = n; i >= 1; i--)
	{
		sum = sum*i;
	}
	return sum;
}
int LeiJia(int n)
{
	int ret = 0;
	for (int i = n; i >= 1; i--)
	{
		ret = ret + Sub1(i);
		continue;
	}
	return ret;
}
int main(){
	int a = 0;
	scanf("%d",&a);
	int b = LeiJia(a);
	printf("�׳˵��ۼ�Ϊ%d", b);
	return 0;
}