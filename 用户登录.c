#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int i = 0;
	char password[20] = { 0 };
	
	for (i = 0; i < 3; i++)//给予3次机会输入密码
	{
		printf("plz input password:");
		scanf("%s", password);
		if (strcmp(password, "613222")==0)//strcmp()比较函数，若相同则返回值为0
		{
			printf("Successfully!");
			break;
		}
		else
		{
			printf("Unsuccessfully!\n");//错误继续输入密码，直至第三次
		}
	}
	if (i == 3)//当i==3则退出
	{
		printf("log out!");
	}

	return 0;
}