#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//若此处不用取地址的方法，交换的只是该函数内的变量值，而影响不到主函数中的变量
void Swap(int* pa, int* pb)//void表示函数不返回任何值
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
	//此处为交换过程
}
int main()
{
	int a = 1;
	int b = 2;

	printf("Before exchange:a=%d  b=%d\n",a,b);
	Swap(&a, &b);//取a，b的地址
	printf("After exchange:a=%d  b=%d\n",a,b);
	return 0;
}