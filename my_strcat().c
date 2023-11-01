#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

char* my_strcat(char* dest,const char* sou)
{
	char* ret = dest;
	//找到destination的\0
	while (*dest)
	{
		dest++;
	}
	//将source的内容追加给destination
	while (*dest++ = *sou++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[20] = "Hello ";
	char arr2[] = "world";
	printf("%s",my_strcat(arr1, arr2));
	return 0;
}