#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(){
	int i = 2;
	do
	{
		if (i == 5)
			break;
		i++;
		printf("%d\n",i);
	} while (i < 10);
	return 0;
}