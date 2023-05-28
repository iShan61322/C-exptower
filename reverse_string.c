#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//字符串逆序：不能使用strlen（）
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;//计算长度
		str++;
	}
	return count;
}
void reverse_string(char* str)
{
	char tmp = *str;
	int len = my_strlen(str);
	*str=*(str+len-1);
	*(str + len - 1) = '\0';
	if (my_strlen(str + 1) >= 2)
	{
		reverse_string(str + 1);
	}
	*(str + len - 1) = tmp;

}
int main()
{
	char arr[20] = { 0 };
	scanf("%s", arr);
	reverse_string(&arr);
	printf("%s\n", arr);
	return 0;
}