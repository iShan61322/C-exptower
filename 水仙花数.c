#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//求出1——100000的水仙花数
//水仙花数：自身数值=每位数的位数次方之和

int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		//1.判断i的几位数--n
		int n = 1;
		int tmp = i;
		while (tmp / 10)
		{
			n++;
			tmp = tmp / 10;
		}
		//2.计算i的每位次方之和
		tmp = i;
		int sum = 0;
		while (tmp)
		{
			sum += pow(tmp % 10, n);
			tmp = tmp / 10;
		}
		//3.判断是否为水仙花数
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}