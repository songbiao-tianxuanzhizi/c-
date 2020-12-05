#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//数组名代表了首元素的地址
void get(int v[],int len)
{
	int i = 0;
	/*int len = sizeof(v) / sizeof(v[0])，假如在这里写此段话来获取数组的长度的话，此时len的值为
	1，而不是v数组本身的数组长度，原因是因为数组虽然定义了但未初始化，那么此时sizeof(v)所求的便不再是数组的字节大小，
	而是首元素地址的字节大小，我们都知道地址是十六位进制表示，也就是一个整形数字，那么sizeof(一个整型数字)最终的结果为4
	而在sizeof(v[0])中所求的是整形数组第一个元素的字节大小，同样仍为4，4/4最终为1，所以求不出数组的长度*/;
	for (i = 0; i <len; i++)
	{
		printf("%d\n", v[i]);
}
}
int main(){
	int b[5] = { 1, 2, 3, 4, 5 };
	int len = sizeof(b) / sizeof(b[0]);/*此时为什么此处sizeof(b)的字节大小为20，原因是此时的整形数组b不但进行了定义还进行了初始化
那么sizeof(b)求的便是整个数组的字节大小，一个整形占4个字节，一共有五个数字，那么一共有20个字节，20/4=5*/
	get(b, len);//打印1，2，3，4，5五个数字

	return 0;
}