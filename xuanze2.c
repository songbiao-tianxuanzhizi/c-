#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(){
	int a = 0;
	scanf("%d", &a);
	switch (a){

	case 2:
		printf("2\n");
		break;

	case 1:/*��ʱ����a�����1,���ʱ������ִ��case2��䣬����������ִ�У�ֱ���ҵ�break�������*/
		printf("1\n");
		//break;
	case 3:
		printf("3\n");
		break;
	default:
		printf("��������\n");
		break;
	}

	return 0;
}