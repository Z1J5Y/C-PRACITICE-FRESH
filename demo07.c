//实验题
#include<stdio.h>
main()
{
	float s;
	int a;
	printf("输入工资:");
	scanf_s("%f", &s);
	if (s < 500) 
	a = 1;
	else if (1000 > s) 
	a = 2;
	else if (2000 > s)
	a = 3;
	else if (3000 > s)
	a = 4;
	else
	a = 5;
	switch (a)
	{
	case 1:
		printf("工资:%f", s);
		break;
	case 2:
		printf("工资:%f", s - s * 0.05);
		break;
	case 3:
		printf("工资:%f", s - s * 0.08);
		break;
	case 4:
		printf("工资:%f", s - s * 0.1);
		break;
	case 5:
		printf("工资:%f", s - s * 0.15);
		break;
	}
}