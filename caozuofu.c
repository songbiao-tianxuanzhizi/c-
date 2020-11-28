#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//C语言操作符
int main(){

	//运算符中的除号
	printf("%d\n",5/2);//输出结果为2
	printf("%f\n",(float)(5)/2);//2.500000
	printf("%f\n", (float)(5) / (float)(2));//输出结果为2.500000
	printf("%f\n", (float)(5/ 2));//输出结果为2.000000


	//运算符中的取余
	printf("%d\n",10%3);//输出结果为1
	printf("%d\n", -10 % 3);//输出结果为-1 
    printf("%d\n", 10 % -3);//输出结果为1   
	printf("%d\n", -10 % -3);//输出结果为-1 


	//单目操作符中的逻辑反操作
	int a = 0;
	printf("%d\n", !!a);/*在逻辑反操作中，若a为非0数，则！a的
					   输出结果为0，！！a的输出结果为0
					   若a为0，则！a的输出结果为1*/


	//单目操作符当中的++与--
	int b = 10;
	int k = b++;
	int o = 10;
	int L = ++o;
	printf("%d\n", k);//输出结果为10,此时是先将b赋给k以后再加1
	printf("%d\n",L);//输出结果为11，此时是先将o加1以后再赋给L

	return 0;


}