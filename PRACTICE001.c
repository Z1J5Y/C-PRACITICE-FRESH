//有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
#include<stdio.h>
main()
{
	int a, b, c, output;
	for (a = 1; a < 5; a++)
	{
		for (b = 1; b < 5; b++)
		{
			for (c = 1; c < 5; c++)
			{
				if (a != b && a != c && b != c)
				{
					output = 100 * a + 10 * b + c;
					printf("输出:%d\n", output);
				}
			}
		}
	}
}