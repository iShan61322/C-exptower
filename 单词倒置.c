#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//将一句话的单词倒置，标点不倒置。例如 I like Beijing. 经过函数变为 Beijing. like I

void reverse(char* left, char* right)
{
	 char tmp = 0;
	 while (left < right)
	 {
	 	tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	 }
}
int main()
{
	char arr[100] = { 0 };
	gets(arr);

	//三步翻转法
	//1.将所有字符逆序
	int len = strlen(arr);
	reverse(arr, arr + len - 1);
	//此时变成  .gnijieB ekil I

	//2.将每一部分再次逆序
	char* start = arr;
	while (*start)
	{
		char* end = start;
		while (*end != ' ' && *end!='\0')
		{
			end++;
		}
		reverse(start, end - 1);
		if (*end == ' ')
			start = end+1;
		else
			start = end;
	}
	printf("%s\n", arr);
	return 0;

}