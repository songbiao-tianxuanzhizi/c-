#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(){
	int i = 0;
	for (i = 1; i <= 10; i++)/*此处for循环中第二个表达式为条件判断语句，即i=0这个表达式，
							 在c语言中0为假，1为真，此时i=0为假，则循环终止，此时不输出任何值*/
	{
		if (i == 5)
			continue;
		printf("%d\n", i);
	}
	return 0;
}