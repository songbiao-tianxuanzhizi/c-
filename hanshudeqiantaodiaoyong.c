#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//������Ƕ�׵�������ʽ����
int Max(int a, int b)
{
	return a > b ? a : b;
}
int Max1(int a, int b, int c)
{
	/*int max1 = Max(a, b);
	int max2 = Max(max1, c);
	return max2;*///�˴�ΪǶ�׵���

	return Max(Max(a, b), c);//�˴�Ϊ��ʽ���ã������õ�ĳ�������ķ���ֵ������Ϊ��һ��ĳ���������õĲ���
}
int main(){
	int a = Max1(7, 5, 8);
	printf("������Ϊ%d",a);
	return 0;
}