#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����continue��ֱ�ӽ�������ѭ��	
int main(){
	int i = 1;
	while (i <= 10)
	{
		i = i + 1;
		if (i == 5)
			continue;
		printf("%d ", i);
	}
	return 0;
}