#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int my_strcmp(char* str1, char* str2)
{
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
		{
			return 0;
		}
		str1++;
		str2++;
	}
	if (*str1 > *str2)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
int main()
{
	char* p = "abc";
	char* q = "abcd";

	int ret = my_strcmp(p, q);

	if (ret > 0)
	{
		printf("p>q\n");
	}
	else if (ret < 0)
	{
		printf("p<q\n");
	}
	else
	{
		printf("p=q\n");
	}
	return 0;
}