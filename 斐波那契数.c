#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//Fib:1 1 2 3 5 8 13...
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n>2)
	{
			c = a + b;
			a = b;
			b = c;
			n--;
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d", Fib(n));
	return 0;
}