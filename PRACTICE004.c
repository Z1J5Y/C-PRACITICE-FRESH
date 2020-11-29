//判断日期为一年中的天数
#include<stdio.h>
main()
{
	int month, day, year, count = 0, sum;
	printf("输入日期(如:2017.1.1)");
	scanf_s("%d.%d.%d", &year, &month, &day);
	switch (month)
	{
	case 1:
	{
		count = 0;
		break;
	}
	case 2:
	{
		count = 31;
		break;
	}
	case 3:
	{
		count = 31 + 28;
		break;
	}
	case 4:
	{
		count = 31 + 28 + 31;
		break;
	}
	case 5:
	{
		count = 31 + 28 + 31 + 30;
		break;
	}
	case 6:
	{
		count = 31 + 28 + 31 + 30 + 31;
		break;
	}
	case 7:
	{
		count = 31 + 28 + 31 + 30 + 31 + 30;
		break;
	}
	case 8:
	{
		count = 31 + 28 + 31 + 30 + 31 + 30 + 31;
		break;
	}
	case 9:
	{
		count = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
		break;
	}
	case 10:
	{
		count = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
		break;
	}
	case 11:
	{
		count = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
		break;
	}
	case 12:
	{
		count = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
		break;
	}
	default:
		printf("输入错误");
		return 0;
	}
	if ((year % 4 != 0) || !(year % 100))
	{
		sum = count + day;
	}
	else
	{
		if (count > 31 + 28)
		{
			sum = count + day + 1;

		}
		else
		{
			sum = count + day;
		}
	}
	printf("这天是这一年的第%d天", sum);
}