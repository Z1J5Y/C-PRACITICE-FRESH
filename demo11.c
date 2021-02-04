#include<stdio.h>
void reserve_num(float array[], int n);
int main()
{
	int i=-1;
	float a[10];
	do
	{
		i++;
		scanf_s("%f",&a[i]);
	} while (a[i] >= 0);
	reserve_num(a, i);
	return 0;
}
void reserve_num(float array[], int n)
{
	printf("\n");
	for (n-=1; n >= 0; n--)
	{
		printf("%f ", array[n]);
	}
}