#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//����һ�����֣�����ÿλ֮��
int DigitSum(int n)
{
	if (n > 9)
	{
		return DigitSum(n / 10) + n % 10;
	}
	else
		return n;
}
int main()
{
	int num = 0;
	printf("Input the number:");
	scanf("%d", &num);
	int sum=DigitSum(num);
	printf("Sum:%d", sum);
	return 0;
}