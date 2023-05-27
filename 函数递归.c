#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//接收一个整型值（无符号），按照顺序打印每一位。例：输入1234，打印1 2 3 4
print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	unsigned int num = 0;
	scanf("%u", &num);
	print(num);
	return 0;
}