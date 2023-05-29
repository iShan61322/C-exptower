#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//用递归实现n的k次方
double my_pow(int n, int k)
{
	if (k == 0)
		return 1.0;
	else if (k > 0)
		return n * my_pow(n, k - 1);
	else
		return 1.0 / my_pow(n, -k);
}
int main()
{
	int n = 0;
	int k = 0;
	printf("Input n, k:");
	scanf("%d %d", &n, &k);
	double sum = my_pow(n, k);
	printf("sum:%lf", sum);

	return 0;
}