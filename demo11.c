//�����������(�ú���)
#include<stdio.h>
void reserve_num(float array[], int n);
main()
{
	int i=-1;
	float a[10];
	printf("��������:");
	do
	{
		i++;
		scanf_s("%f",&a[i]);
	} while (a[i] >= 0);
	reserve_num(a, i);
}
void reserve_num(float array[], int n)
{
	printf("\n����Ϊ:");
	for (n-=1; n >= 0; n--)
	{
		printf("%f ", array[n]);
	}
}