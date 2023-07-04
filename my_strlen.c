#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//模拟实现库函数strlen
int my_strlen(const char* str)
{
	assert(str != NULL);
	int count = 0;
	while (*str++)
	{
		count++;
	}
	return count;
}
int main()
{
	char arr[] = "ToAtob";
	printf("%d\n",my_strlen(arr));
	return 0;
}
