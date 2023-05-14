#include<stdio.h>

int main()
{
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (1 == i % 2)//常数在前变量在后
		{
			printf("%d\n", i);
		}
	}
	return 0;
}