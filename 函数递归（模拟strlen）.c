#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�����ַ������ȣ����ܴ�����ʱ����
int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);//ţ��ɺ����\0 -> 1+��ɺ���� -> 1+1+ɺ���� -> ...
	else
		return 0;
	
}
int main()
{
	char arr[] = "ţ��ɺ����";
	printf("%d", my_strlen(arr));

	return 0;
}