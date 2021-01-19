#include<stdio.h>
main()
{
	double x;
	printf("输入x的值:");
	scanf_s("%lf", &x);
	if (x < 0) printf("答案为:%lf", x * x + x + 6);
	else if (x < 10) printf("答案为:%lf", x * x - 5 * x + 6);
	else printf("答案为:%lf", x * x - x - 1);
}