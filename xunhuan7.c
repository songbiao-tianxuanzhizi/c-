#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//遇到continue，直接结束本趟循环	
int main(){
	int i = 1;
	while (i <= 10)
	{
		i = i + 1;
		if (i == 5)
			continue;
		printf("%d ", i);
	}
	return 0;
}