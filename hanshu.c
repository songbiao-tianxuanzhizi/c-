#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int Add(int a,int b)//Add����Ϊ�Ӻ���
{
	int sum = a + b;
	return sum;
}
int Add1(int a, int b, int c)/*�˴���ʵҲ����ֱ��дreturn a+b+c
							 ֻ�����������Ǹ�ǿ��������һ���ظ�����*/
{
	int sum1 = Add(a,b);//
	int sum2 = Add(sum1, c);
	return sum2;//�˴�Ҫע�⾡����Ҫд��ӡ��䣬дreturn���

}
int main()//main����Ϊ������
{
	int x = 10;
	int y = 20;
	int z = 30;
	int sum1 = Add(x, y);/*�����ĵ��ã�1.ע��ʹ�ú��������е���
									   2.��Ӧ�Ĳ��������Լ�������Ҫƥ��
									   3.�����ǰ�������з���ֵ�ģ���һ��Ҫ�������ķ���ֵ*/
	int sum2 = Add1(x, y, z);
	printf("x��y�ĺ�Ϊ%d\n", sum1);
	printf("x,y,z�ĺ�Ϊ%d\n", sum2);
	return 0;
}

