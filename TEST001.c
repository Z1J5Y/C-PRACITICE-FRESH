//测试用(草稿本
#include<stdio.h>
#include"FUNCTIONS_QRY.h"
main()
{
	int i, n = -1;
	float A[10], b;
	do
	{
		n++;
		printf("\n输入数字:");
		scanf_s("%f", &A[n]);
		printf("n=%d,A[n]=%f\n", n, A[n]);
	} while (A[n] > 0);
	A[n] = 0;
	float_array_queue(A,n);
	printf("\n排序后为:");
	for (i = 0; i < n; i++)
	{
		printf("%f ", A[i]);
	}
}