//ʵ����
#include<stdio.h>
main()
{
	float x, y;
	printf("����x��ֵ:");
	scanf_s("%f", &x);
	if (x < 0)
	{
		y = x * x + x + 6;
		printf("��Ϊ:%f", y);
	}
	else
	{
		if (10 > x)
		{
			y = x * x - 5 * x + 6;
			printf("��Ϊ:%f", y);
		}
		else
		{
			y = x * x - x - 1;
			printf("��Ϊ:%f", y);
		}
	}
}