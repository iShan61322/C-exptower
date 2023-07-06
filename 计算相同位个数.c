#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int NumberOf1(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}
int main()
{
	int m = 0;
	int n = 0;
	printf("Input m,n:", m, n);
	scanf("%d %d", &m, &n);

	int ret = m ^ n;//相同为零，相异为一
	int count = NumberOf1(ret);
	printf("%d\n", count);
	return 0;
}