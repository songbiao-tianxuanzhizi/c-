#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//����1
	for (;;)
	{
		printf("hehe\n");//�����ѭ��
	}
	//����2
	int x, y;
	for (x = 0, y = 0; x<2 && y<5; ++x, y++)
	{
		printf("hehe\n");//���������hehe
	}
	return 0;
}