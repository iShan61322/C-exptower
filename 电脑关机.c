#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");//系统设置关机，定时为60s

	while (1)
	{
		printf("鼠几的电脑将在一分钟后关机，若想取消关机，请输入您最爱的人的姓名：",input);
		scanf("%s", input);
		if (strcmp(input, "鲍博") == 0)
		{
			system("shutdown -a");//系统取消关机
			break;
		}
	}

	return 0;
}