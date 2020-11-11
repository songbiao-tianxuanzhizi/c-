#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(){
	int sum1, sum2;
	scanf("%d%d", &sum1, &sum2);/*此处注意%d与%d之间
	不需要空格，因为不空格与空格在命令框进行输入的时候
	都必须自动空一格进行输入，*/\

	printf("输出的值为%d,%d\n", sum1, sum2);/*此处输出在命令框输入的
								数字*/

	int sum3 = sum1;/*sum1为变量，变量由字母，数字，下划线
	组成，变量的命名最好是小驼峰形，例如max_Num等，且
	变量开头不能以数字开头*/

	int sum4= sum2;
	int sum5= sum3 + sum4;
	printf("和为%d\n", sum5);//输出结果为30

	return 0;
}