//求因数和
#include<stdio.h>
main()
{
	int n, s, p, o = 0;
	printf("输入整数n:");
	scanf_s("%d", &n);
	for (s = 2; s < n; s++)
	{
		p = n % s;
		if (!p)
		{
			o += s;
		}
	}
	printf("%d", o);
}