#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int binary_search(int a[], int k, int s)
{
	int left = 0;
	int right = s - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (a[mid] < k)
		{
			left = mid + 1;
		}
		else if (a[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 6;//����Ԫ��
	int sz = sizeof(arr) / sizeof(arr[0]);//��������Ԫ�ظ���

	int ret = binary_search(arr,key,sz);//��ʱ��Ҫ��Ԫ�ظ������ܲ��Ҿ���λ�õ�����
	if (-1 == ret)
	{
		printf("Can't find!\n");
	}
	else
	{
		printf("The number is:%d\n", ret);
	}
	return 0;
}