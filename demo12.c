//��������
#include<stdio.h>
main()
{
	int n, s, p, o = 0;
	printf("��������n:");
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