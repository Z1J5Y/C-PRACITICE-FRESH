//实验题
#include<stdio.h>
main()
{
	float x, y;
	printf("输入x的值:");
	scanf_s("%f", &x);
	if (x < 0)
	{
		y = x * x + x + 6;
		printf("答案为:%f", y);
	}
	else
	{
		if (10 > x)
		{
			y = x * x - 5 * x + 6;
			printf("答案为:%f", y);
		}
		else
		{
			y = x * x - x - 1;
			printf("答案为:%f", y);
		}
	}
}