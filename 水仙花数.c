#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//���1����100000��ˮ�ɻ���
//ˮ�ɻ�����������ֵ=ÿλ����λ���η�֮��

int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		//1.�ж�i�ļ�λ��--n
		int n = 1;
		int tmp = i;
		while (tmp / 10)
		{
			n++;
			tmp = tmp / 10;
		}
		//2.����i��ÿλ�η�֮��
		tmp = i;
		int sum = 0;
		while (tmp)
		{
			sum += pow(tmp % 10, n);
			tmp = tmp / 10;
		}
		//3.�ж��Ƿ�Ϊˮ�ɻ���
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}