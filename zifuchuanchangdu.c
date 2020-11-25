#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>//strlen库函数包含在<string.h>的头文件当中
//计算字符串的长度
int main(){
	char* p = "abc";
	int a = strlen(p);/*strlen库函数为求字符串的长度，但不包含\0结束符，即遇见\0结束符便会停止，所以字符串“abc”其长度为3*/
	printf("字符串abc长度为%d\n", a);//输出a的值为3
	int c = sizeof(p);
	printf("字符串abc长度为%d\n", c);//输出c的值为4,sizeof获得的是该指针所占的地址空间，32位操作系统对应4字节，64位操作系统对应8字节


	char* d = "abc\0des";
	int b = strlen(d);
	printf("字符串abc\\0des长度为%d\n", b);/*字符串abc\0des的长度为3原因是strlen函数再求字符串长度的时候遇到\0会停止，
									 所以上述字符串在遇到\0时停止后长度只求到了字母c，故长度为3*/
	int l = sizeof(d);
	printf("字符串abc\\0des长度为%d\n", l);//sizeof获得的是该指针所占的地址空间，32位操作系统对应4字节，64位操作系统对应8字节,所以此结果为4


	char str2[] = "asdfgh";//
	int e = strlen(str2);
	printf("字符串asdfgh长度为%d\n", e);//输出e的值为6
	int f = sizeof(str2);
	printf("字符串asdfgh长度为%d\n", f);//输出f的值为7，因为sizeof获得该数组所占内存空间大小，包括字符串结尾的'\0'，所以结果为7
	

	char str3[8] = {  'a', 's', 'd' };
	int g = strlen(str3);
	printf("其长度为%d\n", g);//输出g的值为3
	int h = sizeof(str3);
	printf("其长度为%d\n", h);//输出h的值为8，因为sizeof获得该数组所占内存空间大小，但是大小确定为8，故sizeof得到的结果是8


	char str4[] = "as\0df";
	int i= strlen(str4);
	printf("字符串as\\0df长度为%d\n", i);//输出i的值为2,因为strlen函数在求字符串长度时遇见\0结束符便会停止
	int o = sizeof(str4);
	printf("字符串as\\0df长度为%d\n", o);//输出o的值为6，因为sizeof获得该数组所占内存空间大小，包括字符串结尾的'\0'，所以结果为6


	printf("%d\n", strlen("c:\test\328\test.c")); /*\ddd为格式ddd表示1~3个八进制的数字，所以\328中末位数为8是不能被进行转义的，
												  原因是八进制数字最高只能取到7，所以\32被解析成一个转义字符，故8不能被转义，所以其长度为14*/
	return 0;
}