#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��̬�ֲ���������
void Test()//����һ��Test����
{
    static int i = 0;
	i++;
	printf("%d\n",i);
}
int main365(){
	int i = 0;
	for (; i < 10; i++)
	{
		Test();//Test�ĵ���
	}
	return 0;
}