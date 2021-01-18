#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*最终的输出结果为4321，原因是首先这是一个链式调用，原因是将一个库函数的返回值作为了另一个
库函数的参数，其实printf的返回值是实际控制输出的字符数，那么首先printf库函数先输出43后
，此时43为两个字符，那么下一个printf函数会返回其字符个数也就是2，而2为一个字符，所以最终
的printf函数会返回1，则最终的输出结果为4321*/
int main(){
	printf("%d",printf("%d",printf("%d",43)));//链式调用，所以要从里往外看
	return 0;
}