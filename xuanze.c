#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(){
	int a = 0;
	scanf("%d", &a);
	switch (a){

	case 1:
		printf("1\n");
	case 2:
		printf("2\n");
		break;		/*如果去掉此break，则输出结果为1 2，因为去掉后会按照顺序执行,寻找break语句跳出，从而从case2跳出去*/
	case 3:
		printf("3\n");
		break;
	default:
		printf("输入有误\n");
		break;
	}


	return 0;
}