#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//input string and rotate a piece of them
void string_left_rotate(char *str, int k)
{
	int i = 0;
	int n = strlen(str);
	for (i = 0; i < k; i++)
	{
		char tmp = *str;
		int j = 0;
		for (j = 0; j < n - 1; j++)
		{
			*(str + j) = *(str + j + 1);
		}
		*(str + n - 1) = tmp;
	}
}
int main()
{
	char arr[] = "abcdef";
	int k = 0;
	printf("input k>:");
	scanf("%d", &k);
	string_left_rotate(arr, k);
	printf("%s", arr);
	return 0;
}