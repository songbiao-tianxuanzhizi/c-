#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void binsearch(int x, int v[],int n)
{
	int i = 0;
	int length = sizeof(v) / sizeof(v[0]);//c语言中求整形数组的长度
	for (i = 0; i <length ; i++)
	{
		if ((x == i) && (v[i] == n))
		{
			printf("已经查找到%d\n",v[i]);
			break;
		}

	}
}
int main(){
	int a[5] = {1,2,3,4,5};
	binsearch(2,a,3);
	return 0;
}