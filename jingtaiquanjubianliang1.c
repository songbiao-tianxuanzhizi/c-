#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
extern int global;//��ʱ�����ҵ��������̵�.c�ļ������ҵ�global����

int main(){
	int a = 10;
	int b = a + global;
	printf("global��ֵΪ%d\n", global);//��ʱ��������һ��.c�ļ����ҵ������ǵ�global���������ֵΪ10
	printf("b��ֵΪ%d\n",b);
	return 0;
}