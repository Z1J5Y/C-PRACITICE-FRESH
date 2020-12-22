#include<stdio.h>
main()
{
	float a, c, d;
	int B;
	scanf_s("%f", &a);
	B = ((int)(a * 100)) % 10;
	if (B >= 5)
	{
		c = ((float)(((int)(a * 100) + 1)) / 100);
		printf("output:%f", c);
	}
	else
	{
		d = (float)((int)(a * 100)) / 100;
		printf("output:%f", d);
	}
}
