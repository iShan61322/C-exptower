#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("Input three numbers:");
	scanf("%d %d %d", &a, &b, &c);

	if (a < b)
	{
		int tmp = a;
		a = b;
		b = tmp;//��a��ֵ�洢��tmp����a����b��ֵ���ϴ�ֵ��������b=tmp����Сֵ������ʵ�ֽ���
	}
	if (a < c)
	{
		int tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	}


	printf("%d %d %d", a, b, c);
	return 0;
}