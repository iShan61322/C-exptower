#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;//一个字节一个字节交换
		*buf1 = *buf2;
		*buf2 = tmp;
		*buf1++;
		*buf2++;
	}
}
void bubble_sort(void* base, int sz, int width, int (*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	//趟数
	for (i = 0; i < sz; i++)
	{
		//一趟
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//比较(升序
			//arr[j]  arr[j+1]
			if (cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)
			{
				//交换
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void test()
{
	int arr[] = { 1,5,3,6,2,4,8,9,7,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);
}
int main()
{
	test();
	return 0;
}