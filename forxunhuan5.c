#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//变种1
	for (;;)
	{
		printf("hehe\n");//会成死循环
	}
	//变种2
	int x, y;
	for (x = 0, y = 0; x<2 && y<5; ++x, y++)
	{
		printf("hehe\n");//会输出两次hehe
	}
	return 0;
}