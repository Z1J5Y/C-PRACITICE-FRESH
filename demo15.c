//�������(���ַ�)
#include<stdio.h>
#include"FUNCTIONS_QRY.h"
int search(float array[], int n, float m);
main()
{
	int i = 0,k;
	float a[10], m;
	printf("input value:");
	do
	{
		scanf_s("%f", &a[i]);
		i++;
	} while (a[i - 1] >= 0);
	printf("��Ҫ����:");
	scanf_s("%f", &m);
	float_array_queue(a, i);
	printf("���������\n");
	k=search(a, i,m);
	printf("���������������(����)���Ϊ%d����", k);
}
int search(float array[], int n, float m)//nΪ����Ԫ�ظ���
{
	int a;
	int min, max;
	min = 0;
	max = n - 1;
	for (; array[(min + max) / 2] != m;)
	{
		if (array[(min + max) / 2] > m)
		{
			max = (min + max) / 2;
		}
		else if (array[(min + max) / 2] < m)
		{
			min = (min + max) / 2;
		}
	}
	a= (min + max) / 2;
	return a+1;
}