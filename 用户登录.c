#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int i = 0;
	char password[20] = { 0 };
	
	for (i = 0; i < 3; i++)//����3�λ�����������
	{
		printf("plz input password:");
		scanf("%s", password);
		if (strcmp(password, "613222")==0)//strcmp()�ȽϺ���������ͬ�򷵻�ֵΪ0
		{
			printf("Successfully!");
			break;
		}
		else
		{
			printf("Unsuccessfully!\n");//��������������룬ֱ��������
		}
	}
	if (i == 3)//��i==3���˳�
	{
		printf("log out!");
	}

	return 0;
}