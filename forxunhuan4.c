#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(){
	int i = 0;
	for (i = 1; i <= 10; i++)/*�˴�forѭ���еڶ������ʽΪ�����ж���䣬��i=0������ʽ��
							 ��c������0Ϊ�٣�1Ϊ�棬��ʱi=0Ϊ�٣���ѭ����ֹ����ʱ������κ�ֵ*/
	{
		if (i == 5)
			continue;
		printf("%d\n", i);
	}
	return 0;
}