#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�жϽṹ��C�����в����в������ͣ������÷�0��ʾ�棬0��ʾ��
int main(){
	int coding = 0;//coding������ʼ��Ϊ0
	scanf("%d", &coding);//�����Զ����������
	if (coding == 20000)//�ж��Ƿ�Ϊ�棬��Ļ�ִ�������������䣬�ٵĻ�����
	{
		printf("%s\n", "���������۷�\n");
	}
	else if (coding == 10)//�ж��Ƿ�Ϊ�棬��Ļ�ִ�������������䣬�ٵĻ�����
	{
		printf("%s\n", "�ؼ�������\n");
	}
	else//����������д���ִ�д�������������
	{
		printf("%s\n", "û����\n");
	}
	return 0;
}