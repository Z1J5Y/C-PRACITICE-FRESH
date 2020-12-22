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
	printf("¦°¡Ö%lf,ÀÛ¼ÓÁË%d´Î", Pi,count);
}
