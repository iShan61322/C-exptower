#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int find_num(int arr[3][3], int r, int c, int k)
{
	int x = 0;
	int y = c - 1;

	while (x < r && y >= 0)
	{
		if (arr[x][y] < k)
		{
			x++;
		}
		else if (arr[x][y] > k)
		{
			y--;
		}
		else
		{
			printf("%d %d\n", x, y);
			return 1;
		}
	}
	return 0;


}
int main()
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int k = 7;
	int ret = find_num(arr, 3, 3, k);
	if (ret == 1)
	{
		printf("Find it!\n");
	}
	else
	{
		printf("error!\n");
	}
	return 0;
}