#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(){
	int a = 0;
	scanf("%d", &a);
	switch (a){

	case 1:
		printf("1\n");
	case 2:
		printf("2\n");
		break;		/*���ȥ����break����������Ϊ1 2����Ϊȥ����ᰴ��˳��ִ��,Ѱ��break����������Ӷ���case2����ȥ*/
	case 3:
		printf("3\n");
		break;
	default:
		printf("��������\n");
		break;
	}


	return 0;
}