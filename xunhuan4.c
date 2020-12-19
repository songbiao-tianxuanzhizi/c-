#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//遇到continue，直接结束本趟循环	
int main(){
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			continue;/*遇到continue，直接结束本趟循环,此时当i累加到5时判断为真，执行
                       continue语句，此时会结束本趟循环然后返回到while语句，我们会发现形成了一个死循环，
					   即又执行了一遍if判断语句，i等于5后又执行一遍continue语句后返回while语句*/
		printf("%d ", i);
		i = i + 1;
	}	
	return 0;
}