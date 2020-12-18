#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(){
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			break;//遇到break，直接结束所有循环
		printf("%d ", i);
		i = i + 1;
	}
	return 0;
}