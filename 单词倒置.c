#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��һ�仰�ĵ��ʵ��ã���㲻���á����� I like Beijing. ����������Ϊ Beijing. like I

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

	//������ת��
	//1.�������ַ�����
	int len = strlen(arr);
	reverse(arr, arr + len - 1);
	//��ʱ���  .gnijieB ekil I

	//2.��ÿһ�����ٴ�����
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