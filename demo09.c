//��������(����)(ð�ݷ�)
#include<stdio.h>
main()
{
	int i, j,n=-1;
	float A[10], b;
	do
	{
		n++;
		printf("\n��������:");
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
	printf("�����Ϊ:");
	for (i = 0; i <= n-1; i++)
	{
		printf("%f\n", A[i]);
	}
	printf("\n����%d����", n-1);
}