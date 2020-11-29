#include<stdio.h>
#include<math.h>
main()
{
	float i, j;
	for (i = 13; i <= 84; i++)
	{
		j = 168 / i;
		if (j - (int)j == 0)
		{
			if (!((i + j) / 2 - (int)(i + j) / 2))
			{
				if (!(pow((j + i) / 2, 1 / 2) - (int)pow((j + i) / 2, 1 / 2)))
				{
					if (!(pow((i - j) / 2, 1 / 2) - (int)pow((i - j) / 2, 1 / 2)))
					{
						printf("¸ÃÊýÎª:%f,%f,%f\n", pow((j + i) / 2, 2) - 268, i, j);
					}
					else
					{
						continue;
					}
				}
				else
				{
					continue;
				}
			}
			else
			{
				continue;
			}
		}
		else
		{
			continue;
		}
	}
}