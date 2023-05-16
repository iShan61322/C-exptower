#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int password[20] = { 0 };
	printf("plz input your password:");
	scanf("%s", password);//获取password的地址
	int tmp = 0;
	//声明一个变量tmp，while循环判断读取字符是不是‘\n'，若不是继续清，清到\n,使缓冲区没有字符
	while ((tmp=getchar())!='\n')//清理多个字符
	{
		;
	}
	printf("check?Y/N:");
	int ch = getchar();//获取
	if (ch == 'Y')//判断是否为Y
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}