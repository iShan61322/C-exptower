#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

//模拟实现库函数strcpy
char* my_strcpy(char* dest,const char* src)
{
	assert(dest != NULL);//断言
	assert(src != NULL);//断言
	char* ret = dest;
	while (*dest++ = *src++)
	{
		;//拷贝
	}
	return ret;
}
int main()
{
	char arr1[20] = "xxxxxxxxx";
	char arr2[] = "牛大王";
	printf("%s", my_strcpy(arr1, arr2));//函数的链式访问
	return 0;
}