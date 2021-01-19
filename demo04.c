#include<stdio.h>
#include<math.h>
main()
{
	double rate = 0.0225;
	double deposit , n , capital , p;
	printf("输入存款期(年)和本金(元)格式(年,元):");
	scanf_s("%lf,%lf", &n,&capital);
	getchar();
	p = pow((rate + 1), n);
	deposit = (capital * p);
	printf("本利和为：%lf", deposit);
}