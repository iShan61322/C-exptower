#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

//ģ��ʵ�ֿ⺯��strcpy
char* my_strcpy(char* dest,const char* src)
{
	assert(dest != NULL);//����
	assert(src != NULL);//����
	char* ret = dest;
	while (*dest++ = *src++)
	{
		;//����
	}
	return ret;
}
int main()
{
	char arr1[20] = "xxxxxxxxx";
	char arr2[] = "ţ����";
	printf("%s", my_strcpy(arr1, arr2));//��������ʽ����
	return 0;
}