//累加法求e
#include<stdio.h>
main()
{
	float i, k;
	double sum = 1,j = 1;
	int count = 0;
	long  m;
	for (i = 1; i < 1e5;)
	{
		for (k = 1, m = 1; k <= i; ++k)
		{
			m *= k;
		}
		j = 1.0 / m;
		count += 1;
		sum += j;
		i += 1;
	}
	printf("e的值约为%lf,累加了%d次", sum, count);
}