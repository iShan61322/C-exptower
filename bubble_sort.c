#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//ð������
void bubble_sort(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j+1])
			{
				int tmp = arr[j];
				arr[i] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int m = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	for (m = 0; m < sz; m++)
	{
		printf("%d ", arr[m]);
	}
	return 0;
}