#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
enum Sex{//ö�ٳ���
	MALE,
	MIDDLE,
	FEMALE=99,//��ʱ��FEMALE�ĳ�99
	SECRET,
};
int main(){
	printf("MALE��ֵΪ%d\n", MALE);//��ʱĬ�ϵ�������Ϊ0
	printf("MIDDLE��ֵΪ%d\n", MIDDLE);//��ʱĬ�ϵ�������Ϊ1
	printf("FEMALE��ֵΪ%d\n", FEMALE);//��ʱĬ�ϵ�������Ϊ99
	printf("SECRET��ֵΪ%d\n", SECRET); //��ʱĬ�ϵ�������Ϊ100
	return 0;
}