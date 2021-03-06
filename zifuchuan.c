#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

/*输出一个字符串,因为c语言中是没有字符串类型的，所以可以用指针类型或者数组类型对字符
串进行输出*/

int main(){//int main是c99标准

	char* p = "abcde";/*char*为指针类型，p为指针
					  abcde为字符串，C语言中是没有
					  特定的字符串类型的*/
	printf("%s\n", p);/*打印这个字符串，若要打印字符串
					  则参数为%s,输出结果为abcde*/

	char str[] = { "bit" };//用双引号括起来表示字符串，其中默认是有一个结束标志\0
	char str2[] = { 'b','i','t' };
	char str3[] = { 'b', 'i', 't' ,'\0'};
	char str4[7] = { 'b', 'i', 't' ,'t'};/*此时如果给定了数组的大小，以此数组为
										 例,它是有七个格子，前四个放入了bitt,
										 则后面三个此时默认放的都是\0*/



	printf("%s\n", str);/*输出结果为bit,原因是字符串的结束标志为\0
						 的转义字符但是平时是不会写出来的，是系统默认的，
						 所以当字符串“bit”存到char类型的数组时会自动
						 在末尾存入\0*/

	printf("%s\n", str2);/*输出结果为bit烫烫烫烫蘠it，原因是此时的'b','i','t'
						 已经不再是字符串了，则不再默认有\0符号，所以
						 在输出字符串的时候会bit后面的是随机输出的，即找到
						 \0结束标志才会结束*/

	printf("%s\n", str3);/*输出结果为bit，此时有结束标志\0，*/

	printf("%s\n", str4);/*输出结果为bitt*/

	return 0;
}