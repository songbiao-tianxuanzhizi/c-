#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>//strlen�⺯��������<string.h>��ͷ�ļ�����

//ת���ַ���ʹ��
int main(){
	//����һ���������Ļ��ӡ�����helloworld��
	printf("%s\n", "\"helloworld\"");//������Ϊ��helloworld��
	//��������������Ļ��ӡ��������� '
	//���������������Ļ��ӡ���˫����''
	printf("%s\n", "\'");
	printf("%s\n", "\"");
	return 0;
}