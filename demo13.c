//数组排序(选择法)(降序)
#include<stdio.h>
main()
{
	int i, j, n = -1,k;
	float A[10], b;
	do
	{
		n++;
		printf("\n输入数字:");
		scanf_s("%f", &A[n]);
		printf("n=%d,A[n]=%f\n", n, A[n]);
	} while (A[n] >= 0);
	for (i = 0; i < n-1; i++)
	{
		k = i;
		for (j = i + 1; j < n-1; j++)
		{
			if (A[j] > A[k])
			{
				k = j;
			}
		}
		if (k != i)
		{
			b = A[i];
			A[i] = A[k];
			A[k] = b;
		}
	}
	printf("排序后为:");
	for (i = 0; i <= n-1; i++)
	{
		printf("%f\n", A[i]);
	}
	printf("\n共有%d个数", n);
}