//ʵ����
#include<stdio.h>
main()
{
	float s;
	int a;
	printf("���빤��:");
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
		printf("����:%f", s);
		break;
	case 2:
		printf("����:%f", s - s * 0.05);
		break;
	case 3:
		printf("����:%f", s - s * 0.08);
		break;
	case 4:
		printf("����:%f", s - s * 0.1);
		break;
	case 5:
		printf("����:%f", s - s * 0.15);
		break;
	}
}