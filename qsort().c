#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int print_com(int arr[],int sz)
{
	int n = 0;
	for (n = 0; n < sz; n++)
	{
		printf("%d ",arr[n]);
	}
	printf("\n");
}
int sort_num(const void* e1,const void* e2)
{
	return *(int *)e1 - *(int*)e2;
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), sort_num);
	print_com(arr,sz);
	return 0;
}