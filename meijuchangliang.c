#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
enum Sex{//枚举常量
	MALE,
	MIDDLE,
	FEMALE=99,//此时将FEMALE改成99
	SECRET,
};
int main(){
	printf("MALE的值为%d\n", MALE);//此时默认的输出结果为0
	printf("MIDDLE的值为%d\n", MIDDLE);//此时默认的输出结果为1
	printf("FEMALE的值为%d\n", FEMALE);//此时默认的输出结果为99
	printf("SECRET的值为%d\n", SECRET); //此时默认的输出结果为100
	return 0;
}