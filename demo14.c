//�������(����)
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
	printf("��Ҫ����:");
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
		printf("������ǵ�%d����,�������%f", b+1,m);
	}
	else
	{
		printf("û�������");
	}
}