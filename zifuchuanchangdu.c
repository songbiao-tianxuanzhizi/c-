#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>//strlen�⺯��������<string.h>��ͷ�ļ�����
//�����ַ����ĳ���
int main(){
	char* p = "abc";
	int a = strlen(p);/*strlen�⺯��Ϊ���ַ����ĳ��ȣ���������\0��������������\0���������ֹͣ�������ַ�����abc���䳤��Ϊ3*/
	printf("�ַ���abc����Ϊ%d\n", a);//���a��ֵΪ3
	int c = sizeof(p);
	printf("�ַ���abc����Ϊ%d\n", c);//���c��ֵΪ4,sizeof��õ��Ǹ�ָ����ռ�ĵ�ַ�ռ䣬32λ����ϵͳ��Ӧ4�ֽڣ�64λ����ϵͳ��Ӧ8�ֽ�


	char* d = "abc\0des";
	int b = strlen(d);
	printf("�ַ���abc\\0des����Ϊ%d\n", b);/*�ַ���abc\0des�ĳ���Ϊ3ԭ����strlen���������ַ������ȵ�ʱ������\0��ֹͣ��
									 ���������ַ���������\0ʱֹͣ�󳤶�ֻ������ĸc���ʳ���Ϊ3*/
	int l = sizeof(d);
	printf("�ַ���abc\\0des����Ϊ%d\n", l);//sizeof��õ��Ǹ�ָ����ռ�ĵ�ַ�ռ䣬32λ����ϵͳ��Ӧ4�ֽڣ�64λ����ϵͳ��Ӧ8�ֽ�,���Դ˽��Ϊ4


	char str2[] = "asdfgh";//
	int e = strlen(str2);
	printf("�ַ���asdfgh����Ϊ%d\n", e);//���e��ֵΪ6
	int f = sizeof(str2);
	printf("�ַ���asdfgh����Ϊ%d\n", f);//���f��ֵΪ7����Ϊsizeof��ø�������ռ�ڴ�ռ��С�������ַ�����β��'\0'�����Խ��Ϊ7
	

	char str3[8] = {  'a', 's', 'd' };
	int g = strlen(str3);
	printf("�䳤��Ϊ%d\n", g);//���g��ֵΪ3
	int h = sizeof(str3);
	printf("�䳤��Ϊ%d\n", h);//���h��ֵΪ8����Ϊsizeof��ø�������ռ�ڴ�ռ��С�����Ǵ�Сȷ��Ϊ8����sizeof�õ��Ľ����8


	char str4[] = "as\0df";
	int i= strlen(str4);
	printf("�ַ���as\\0df����Ϊ%d\n", i);//���i��ֵΪ2,��Ϊstrlen���������ַ�������ʱ����\0���������ֹͣ
	int o = sizeof(str4);
	printf("�ַ���as\\0df����Ϊ%d\n", o);//���o��ֵΪ6����Ϊsizeof��ø�������ռ�ڴ�ռ��С�������ַ�����β��'\0'�����Խ��Ϊ6


	printf("%d\n", strlen("c:\test\328\test.c")); /*\dddΪ��ʽddd��ʾ1~3���˽��Ƶ����֣�����\328��ĩλ��Ϊ8�ǲ��ܱ�����ת��ģ�
												  ԭ���ǰ˽����������ֻ��ȡ��7������\32��������һ��ת���ַ�����8���ܱ�ת�壬�����䳤��Ϊ14*/
	return 0;
}