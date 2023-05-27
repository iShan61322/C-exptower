#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//计算字符串长度，不能创建临时变量
int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);//牛雨珊大王\0 -> 1+雨珊大王 -> 1+1+珊大王 -> ...
	else
		return 0;
	
}
int main()
{
	char arr[] = "牛雨珊大王";
	printf("%d", my_strlen(arr));

	return 0;
}