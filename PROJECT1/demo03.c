#include<stdio.h>
main()
{
	long int a , b , c ,d;
	printf("����һ����λʮ��������:");
	scanf_s("%ld",&a);
	if (a < 0)
	{
		a = -a;
	}
	else
	{
		a = a;
	}
	b = a % 10;
	c = ((a - b) / 10) % 10;
	d = (a - b - (10 * c)) / 100;
	printf("����������Ϊ��%ld", 100 * b + 10 * c + d);
}