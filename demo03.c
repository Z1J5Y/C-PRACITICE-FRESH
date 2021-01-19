#include<stdio.h>
main()
{
	long int a , b , c ,d;
	printf("输入一个三位十进制整数:");
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
	printf("它的逆序数为：%ld", 100 * b + 10 * c + d);
}