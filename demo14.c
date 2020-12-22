//数组查找(遍历)
#include<stdio.h>
void search(float array[], int n,float m);
main()
{
	int i = 0;
	float a[10], m;
	printf("input value:");
	do
	{
		scanf_s("%f", &a[i]);
		i++;
	} while (a[i - 1] >= 0);
	printf("想要查找:");
	scanf_s("%f", &m);
	search(a, i, m);
}
void search(float array[], int n, float m)
{
	int b = -1;
	do
	{
		b++;
	} while (array[b] != m && b <= n-1);
	if (array[b] = m)
	{
		printf("这个数是第%d个数,这个数是%f", b+1,m);
	}
	else
	{
		printf("没有这个数");
	}
}