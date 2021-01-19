//数组排序(正数)(冒泡法)
#include<stdio.h>
main()
{
	int i, j,n=-1;
	float A[10], b;
	do
	{
		n++;
		printf("\n输入数字:");
		scanf_s("%f", &A[n]);
		printf("n=%d,A[n]=%f\n", n, A[n]);
	} while (A[n]>0);
	for (i = 0; i < n-1; i++)
	{
		for (j = i+1; j < n-1; j++)
		{
			if (A[j] > A[i])
			{
				b = A[i];
				A[i] = A[j];
				A[j] = b;
			}
		}
	}
	printf("排序后为:");
	for (i = 0; i <= n-1; i++)
	{
		printf("%f\n", A[i]);
	}
	printf("\n共有%d个数", n-1);
}