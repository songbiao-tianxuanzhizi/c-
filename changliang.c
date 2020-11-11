/**c语言中常见的常量
 */

#define _CRT_SECURE_NO_WARNINGS 1 
#define SIZE_I11 22//define定义的标识符常量
#include<stdio.h>
enum Sex{//枚举常量
    MALE,
	FEMALE,
	SECRET
};
int main(){
	3.14;//字面常量
	const int a = 10;/*被const修饰后，其值不能再发生改变
						 且定义的同时进行初始化*/
	printf("MALE的值为%d\n", MALE);//此时默认的输出结果为0
	printf("FEMALE的值为%d\n", FEMALE);//此时默认的输出结果为1
	printf("SECRET的值为%d\n", SECRET); //此时默认的输出结果为2
	return 0;


}
