#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����continue��ֱ�ӽ�������ѭ��	
int main(){
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			continue;/*����continue��ֱ�ӽ�������ѭ��,��ʱ��i�ۼӵ�5ʱ�ж�Ϊ�棬ִ��
                       continue��䣬��ʱ���������ѭ��Ȼ�󷵻ص�while��䣬���ǻᷢ���γ���һ����ѭ����
					   ����ִ����һ��if�ж���䣬i����5����ִ��һ��continue���󷵻�while���*/
		printf("%d ", i);
		i = i + 1;
	}	
	return 0;
}