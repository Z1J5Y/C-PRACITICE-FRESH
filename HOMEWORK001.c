//累加求Π
#include<stdio.h>
#include<math.h>
main()
{
	float i, j = 1;
	int count=0;
	double sum=0, Pi;
	for (i = 1; i < 1e4;)
	{
		j = 1 / i;
		i += 2;
		count += 1;
		sum += pow(-1, (count + 1))*j;
	}
	Pi = 4 * sum;
	printf("Π≈%lf,累加了%d次", Pi,count);
}