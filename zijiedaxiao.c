#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(){
	//sizeof�����������ֽڵĴ�С����sizeof�����ǿ⺯�������ǹؼ���
	printf("%d\n", sizeof(char));//1���ֽ�
	printf("%d\n", sizeof(short));//2���ֽ�
	printf("%d\n", sizeof(int));/*ע��int�ֽ���16λ��Ϊ2���ֽڣ���32λ��64λ��Ϊ4���ֽ�*/
	printf("%d\n", sizeof(long));/*ע��long�ֽ���windowsϵͳ�ж�Ϊ4���ֽڣ���linux64λϵͳ��longռ�˸��ֽ�*/
	printf("%d\n", sizeof(long long));//8���ֽ�
	printf("%d\n", sizeof(float));//4���ֽ�
	printf("%d\n", sizeof(double));//8���ֽ�
	printf("%d\n", sizeof(long double));//8���ֽ�
	return 0;

}