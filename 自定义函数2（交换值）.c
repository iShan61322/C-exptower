#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//���˴�����ȡ��ַ�ķ�����������ֻ�Ǹú����ڵı���ֵ����Ӱ�첻���������еı���
void Swap(int* pa, int* pb)//void��ʾ�����������κ�ֵ
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
	//�˴�Ϊ��������
}
int main()
{
	int a = 1;
	int b = 2;

	printf("Before exchange:a=%d  b=%d\n",a,b);
	Swap(&a, &b);//ȡa��b�ĵ�ַ
	printf("After exchange:a=%d  b=%d\n",a,b);
	return 0;
}