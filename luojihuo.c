#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//逻辑或：符号为||，格式：表达式1||表达式2||表达式3||... 
/*逻辑或中当其中有一个表达式为真时，那么整个表达式都为真，此时这个表达式后面的表达式便不再执行力，
当有一个表达式为假时，则继续往后执行寻找为真的表达式，当所有表达式为假时，整个表达式才为假*/
int main(){
	//例子1
	int c = 1;
	int d = 0;
	int e = 2;
	if (c++||d++||e++)
	{
		printf("一：%d%d%d\n", c, d, e);/*分析：在这里我们可以看到首先是一个c++语句，由于c++语句是先看c是几然后
									  再递增，那么此时c的值为1（非0），为真（c语言中0为假，非0为真），则c递增
									  后为2，此时后面的表达式d++与表达式e++便不再执行，则d的值为0，c的值为2，此时的
									  输出结果为一：202*/
	}
	else{
		printf("二：%d%d%d\n", c, d, e);
	}

	//例子2
	int f = 0;
	int g = 1;
	int h = 2;
	if (f++||g++||h++)
	{
		printf("一：%d%d%d\n", f, g, h);/*分析：在这里我们可以看到首先是一个f++语句，由于f++语句是先看f是几然后再递增
									  那么此时f的值为0，为假（c语言中0为假，非0为真），那么此时继续看g++语句是否为真
						              g++语句先看g是几再递增，此时g为1(非0)，为真，此时其后面的h++语句便不再执行了，则
									  h的值为2，g递增加1为2，虽然f++为假，但是仍要执行，所以f递增加1后为1，此时执行的是
									  printf("一：%d%d%d\n", f, g, h); 结果为一：122*/

	}
	else{
		printf("二：%d%d%d\n", f, g, h);
	}

	return 0;
}