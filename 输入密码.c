#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int password[20] = { 0 };
	printf("plz input your password:");
	scanf("%s", password);//��ȡpassword�ĵ�ַ
	int tmp = 0;
	//����һ������tmp��whileѭ���ж϶�ȡ�ַ��ǲ��ǡ�\n'�������Ǽ����壬�嵽\n,ʹ������û���ַ�
	while ((tmp=getchar())!='\n')//�������ַ�
	{
		;
	}
	printf("check?Y/N:");
	int ch = getchar();//��ȡ
	if (ch == 'Y')//�ж��Ƿ�ΪY
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}