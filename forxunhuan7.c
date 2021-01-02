
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0;
	//for(i=1/*初始化*/; i<=10/*判断部分*/; i++/*调整部分*/)
	for (i = 1; i <= 10; i++)
	{
		printf("%d ", i);
	}
	return 0;
}