#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main(){
	int a = 10;
	int b = 20;
	int c = 30;
	int d = (10, 20, 30,40,50);
	printf("d��ֵΪ%d\n", d);//��ʱd��ֵΪ50��ԭ�����������ű��ʽ�Ľ��Ϊ���ű��ʽ�����һ�����ʽ�Ľ�����μǼ���
	return 0;
}