#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(){
	int sum1, sum2;
	scanf("%d%d", &sum1, &sum2);/*�˴�ע��%d��%d֮��
	����Ҫ�ո���Ϊ���ո���ո����������������ʱ��
	�������Զ���һ��������룬*/\

	printf("�����ֵΪ%d,%d\n", sum1, sum2);/*�˴����������������
								����*/

	int sum3 = sum1;/*sum1Ϊ��������������ĸ�����֣��»���
	��ɣ����������������С�շ��Σ�����max_Num�ȣ���
	������ͷ���������ֿ�ͷ*/

	int sum4= sum2;
	int sum5= sum3 + sum4;
	printf("��Ϊ%d\n", sum5);//������Ϊ30

	return 0;
}