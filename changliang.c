/**c�����г����ĳ���
 */

#define _CRT_SECURE_NO_WARNINGS 1 
#define SIZE_I11 22//define����ı�ʶ������
#include<stdio.h>
enum Sex{//ö�ٳ���
    MALE,
	FEMALE,
	SECRET
};
int main(){
	3.14;//���泣��
	const int a = 10;/*��const���κ���ֵ�����ٷ����ı�
						 �Ҷ����ͬʱ���г�ʼ��*/
	printf("MALE��ֵΪ%d\n", MALE);//��ʱĬ�ϵ�������Ϊ0
	printf("FEMALE��ֵΪ%d\n", FEMALE);//��ʱĬ�ϵ�������Ϊ1
	printf("SECRET��ֵΪ%d\n", SECRET); //��ʱĬ�ϵ�������Ϊ2
	return 0;


}
