#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

get_max(int x, int y)
{
	return (x > y) ? x : y;
}
int main()
{
	int a = 1;
	int b = 2;
	int max = get_max(a, b);
	printf("%d\n", max);
	return 0;
}