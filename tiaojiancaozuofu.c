#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(){
	int a = 1;
	int b = 0;
	int c = 1;
	int d = a ? (b == 1 ? c : a) : c;
	printf("d��ֵΪ%d\n", d); //ִ�н��Ϊ1
	return 0;
}