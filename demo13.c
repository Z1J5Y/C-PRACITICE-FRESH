//��������(ѡ��)(����)
#include<stdio.h>
main()
{
	int i, j, n = -1,k;
	float A[10], b;
	do
	{
		n++;
		printf("\n��������:");
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
	printf("�����Ϊ:");
	for (i = 0; i <= n-1; i++)
	{
		printf("%f\n", A[i]);
	}
	printf("\n����%d����", n);
}