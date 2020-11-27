#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int Add(int a,int b)//Add方法为子函数
{
	int sum = a + b;
	return sum;
}
int Add1(int a, int b, int c)/*此处其实也可以直接写return a+b+c
							 只是在这里我们更强调方法的一个重复调用*/
{
	int sum1 = Add(a,b);//
	int sum2 = Add(sum1, c);
	return sum2;//此处要注意尽量不要写打印语句，写return语句

}
int main()//main方法为主函数
{
	int x = 10;
	int y = 20;
	int z = 30;
	int sum1 = Add(x, y);/*方法的调用：1.注意使用函数名进行调用
									   2.对应的参数类型以及个数都要匹配
									   3.如果当前函数是有返回值的，则一定要接收它的返回值*/
	int sum2 = Add1(x, y, z);
	printf("x与y的和为%d\n", sum1);
	printf("x,y,z的和为%d\n", sum2);
	return 0;
}

