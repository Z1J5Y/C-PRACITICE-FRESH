#define _CRT_SECURE_NO_WARNINGS//不知道为什么 如果用VC6.0就不需要这行代码 如果不写这一行 在VS2019会报错C4996:too few arguments in function call
#include<stdio.h>
#include<string.h>
#define N 20
main()
{
	char a[N] = { "0" }, b[N] = { "0" }, result[N] = { "0" }, temp[N];
	int an, bn, extra = 0, max, way, i, j;
	printf("Please input one strings:");
	gets(a);
	printf("这是一个%d位数\n", (int)strlen(a));
	printf("Please input another strings:");
	gets(b);
	printf("这是一个%d位数\n", (int)strlen(b));
	an = (int)strlen(a) - 1;
	bn = (int)strlen(b) - 1;
	max = an > bn ? an : bn;
	printf("Input the way of operation(1：puls,2:minus):");
	scanf_s("%d", &way);
	if (way == 1)//加法
	{
		while (max >= 0)
		{
			if (an >= 0 && bn >= 0)
			{
				if ((a[an] - '0') + (b[bn] - '0') + extra > 9)
				{
					result[max] = (a[an] + b[bn]) - '0' - 10 + extra;
					extra = 1;
				}
				else
				{
					result[max] = (a[an] + b[bn]) - '0' + extra;
					extra = 0;
				}
				an--;
				bn--;
			}
			else
			{
				if (an >= 0 && bn < 0)
				{
					if ((a[an] - '0') + extra > 9)
					{
						result[max] = '0';
						extra = 1;
					}
					else
					{
						result[max] = a[an] + extra;
						extra = 0;
					}
					an--;
				}
				else if (bn >= 0 && an < 0)
				{
					if (b[bn] - '0' + extra > 9)
					{
						result[max] = '0';
						extra = 1;
					}
					else
					{
						result[max] = b[bn] + extra;
						extra = 0;
					}
					bn--;
				}
			}
			max--;
		}
		if (extra)
			printf("the result : 1%s\n", result);
		else
			printf("the result : %s\n", result);
	}
	else//减法
	{
		for (i = 0; i < (int)strlen(a) && i < (int)strlen(b); i++)
		{
			if (a[i] == b[i])
			{
				continue;
			}
			else
			{
				if (a[i] > b[i])
				{
					j = 1;
					break;
				}
				else
				{
					j = 0;
					strcpy(temp, a);
					strcpy(a, b);
					strcpy(b, temp);
					break;
				}
			}
		}
		//判断正负
		while (max >= 0)
		{
			if (an >= 0 && bn >= 0)
			{
				if ((a[an] - '0') - (b[bn] - '0') - extra < 0)
				{
					result[max] = a[an] - b[bn] + '0' + 10 - extra;
					extra = 1;
				}
				else
				{
					result[max] = a[an] - b[bn] + '0' - extra;
					extra = 0;
				}
				an--;
				bn--;
			}
			else
			{
				if (an >= 0 && bn < 0)
				{
					if (a[an] - '0' - extra < 0)
					{
						result[max] = '9';
						extra = 1;
					}
					else
					{
						result[max] = a[an] - extra;
						extra = 0;
					}
					an--;
				}
				else if (bn >= 0 && an < 0)
				{
					if (-b[bn] + '0' + extra < 0)
					{
						result[max] = '0';
						extra = 1;
						if (result[max] < 0)
						{
							result[max] = 10 - result[max];
						}
					}
					else
					{
						result[max] = b[bn] - extra;
						extra = 0;
						if (result[max] < 0)
						{
							result[max] = 10 - result[max];
						}
					}
					bn--;
				}
			}
			max--;
		}
		if (strlen(b) > strlen(a))
		{
			printf("the result : %s\n", result);
		}
		else if (strlen(a) == strlen(b) && j)
		{
			printf("the result : %s\n", result);
		}
		else
		{
			printf("the result : -%s\n", result);
		}

	}
}