#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");//ϵͳ���ùػ�����ʱΪ60s

	while (1)
	{
		printf("�󼸵ĵ��Խ���һ���Ӻ�ػ�������ȡ���ػ���������������˵�������",input);
		scanf("%s", input);
		if (strcmp(input, "����") == 0)
		{
			system("shutdown -a");//ϵͳȡ���ػ�
			break;
		}
	}

	return 0;
}