#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(){
	int a = 0;
	scanf("%d", &a);
	switch (a){

	case 2:
		printf("2\n");
		break;

	case 1:/*此时若将a输入成1,则此时并不会执行case2语句，会依次往下执行，直到找到break语句跳出*/
		printf("1\n");
		//break;
	case 3:
		printf("3\n");
		break;
	default:
		printf("输入有误\n");
		break;
	}

	return 0;
}