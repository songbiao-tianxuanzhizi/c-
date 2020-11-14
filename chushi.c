
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>/*头文件，里面包含了当前的printf()函数，具体的实现已经由
                 库里面实现好了，只需拿来调用即可*/

int main()/*int为方法的返回时类型，main为方法的名称，小括号里面为参数列表
		  即为形参，且参数列表可有可无*/
		  //且main函数作为程序的入口，有且只有一个
{

	printf("helloworld");/*printf为库函数，分号代表了当前语句的结束,同时在
	使用库函数时一定要使用对应它的头文件，例如printf函数所对应的都文件为
	stdio.h*/

	return 0;//return语句代表了程序的结束，而当返回0时代表了程序的正常结束

	//printf("helloworld请22");//若是在return语句后面写语句的话是不会被执行的

}

