#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//ÅĞ¶Ï1000-2000ÄêµÄÈòÄê
int is_leap_year(int x)
{
	if ((x%4==0)&&(x%100!=0)||(x%400==0))
	{
		return 1;
	}
	return 0;
}
int main()
{
	int i = 0;
	for (i = 1000; i <= 2000; i++)
	{
		if (is_leap_year(i) == 1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}