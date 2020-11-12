#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(){
	//sizeof方法用来求字节的大小，且sizeof并不是库函数，而是关键字
	printf("%d\n", sizeof(char));//1个字节
	printf("%d\n", sizeof(short));//2个字节
	printf("%d\n", sizeof(int));/*注意int字节在16位中为2个字节，在32位和64位中为4个字节*/
	printf("%d\n", sizeof(long));/*注意long字节在windows系统中都为4个字节，在linux64位系统中long占八个字节*/
	printf("%d\n", sizeof(long long));//8个字节
	printf("%d\n", sizeof(float));//4个字节
	printf("%d\n", sizeof(double));//8个字节
	printf("%d\n", sizeof(long double));//8个字节
	return 0;

}