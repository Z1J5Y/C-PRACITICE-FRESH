#include<stdio.h>
main()
{
	double x;
	printf("����x��ֵ:");
	scanf_s("%lf", &x);
	if (x < 0) printf("��Ϊ:%lf", x * x + x + 6);
	else if (x < 10) printf("��Ϊ:%lf", x * x - 5 * x + 6);
	else printf("��Ϊ:%lf", x * x - x - 1);
}