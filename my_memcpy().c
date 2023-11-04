#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

void* my_memcpy(void* dest, const void* src, size_t num)
{
	void* ret = dest;
	assert(dest && src);
	while (num--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;
}
int main()
{
	int arr1[20] = { 0,1,2,3,4,5,6,7,8,9 };
	int arr2[20] = { 0 };

	my_memcpy(arr2, arr1, 40);
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}