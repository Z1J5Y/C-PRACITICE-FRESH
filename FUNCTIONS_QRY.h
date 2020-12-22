//枚举型非闰年日期
enum DAY_OF_YEAR
{
	JIN1 = 1, JIN2, JIN3, JIN4, JIN5, JIN6, JIN7, JIN8, JIN9, JIN10, JIN11, JIN12, JIN13, JIN14, JIN15, \
	JIN16, JIN17, JIN18, JIN19, JIN20, JIN21, JIN22, JIN23, JIN24, JIN25, JIN26, JIN27, JIN28, JIN29, JIN30, JIN31, \
	FEB1 = 32, FEB2, FEB3, FEB4, FEB5, FEB6, FEB7, FEB8, FEB9, FEB10, FEB11, FEB12, FEB13, FEB14, \
	FEB15, FEB16, FEB17, FEB18, FEB19, FEB20, FEB21, FEB22, FEB23, FEB24, FEB25, FEB26, FEB27, FEB28, \
	MAR1 = 60, MAR2, MAR3, MAR4, MAR5, MAR6, MAR7, MAR8, MAR9, MAR10, MAR11, MAR12, MAR13, MAR14, MAR15, \
	MAR16, MAR17, MAR18, MAR19, MAR20, MAR21, MAR22, MAR23, MAR24, MAR25, MAR26, MAR27, MAR28, MAR29, MAR30, MAR31, \
	APR1 = 91, APR2, APR3, APR4, APR5, APR6, APR7, APR8, APR9, APR10, APR11, APR12, APR13, APR14, APR15, \
	APR16, APR17, APR18, APR19, APR20, APR21, APR22, APR23, APR24, APR25, APR26, APR27, APR28, APR29, APR30, \
	MAY1 = 121, MAY2, MAY3, MAY4, MAY5, MAY6, MAY7, MAY8, MAY9, MAY10, MAY11, MAY12, MAY13, MAY14, MAY15, \
	MAY16, MAY17, MAY18, MAY19, MAY20, MAY21, MAY22, MAY23, MAY24, MAY25, MAY26, MAY27, MAY28, MAY29, MAY30, MAY31,
	JUN1 = 152, JUN2, JUN3, JUN4, JUN5, JUN6, JUN7, JUN8, JUN9, JUN10, JUN11, JUN12, JUN13, JUN14, JUN15, \
	JUN16, JUN17, JUN18, JUN19, JUN20, JUN21, JUN22, JUN23, JUN24, JUN25, JUN26, JUN27, JUN28, JUN29, JUN30, \
	JUL1 = 182, JUL2, JUL3, JUL4, JUL5, JUL6, JUL7, JUL8, JUL9, JUL10, JUL11, JUL12, JUL13, JUL14, JUL15, \
	JUL16, JUL17, JUL18, JUL19, JUL20, JUL21, JUL22, JUL23, JUL24, JUL25, JUL26, JUL27, JUL28, JUL29, JUL30, JUL31, \
	AUG1 = 213, AUG2, AUG3, AUG4, AUG5, AUG6, AUG7, AUG8, AUG9, AUG10, AUG11, AUG12, AUG13, AUG14, AUG15, \
	AUG16, AUG17, AUG18, AUG19, AUG20, AUG21, AUG22, AUG23, AUG24, AUG25, AUG26, AUG27, AUG28, AUG29, AUG30, AUG31, \
	SEP1 = 244, SEP2, SEP3, SEP4, SEP5, SEP6, SEP7, SEP8, SEP9, SEP10, SEP11, SEP12, SEP13, SEP14, SEP15, \
	SEP16, SEP17, SEP18, SEP19, SEP20, SEP21, SEP22, SEP23, SEP24, SEP25, SEP26, SEP27, SEP28, SEP29, SEP30, \
	OCO1 = 274, OCO2, OCO3, OCO4, OCO5, OCO6, OCO7, OCO8, OCO9, OCO10, OCO11, OCO12, OCO13, OCO14, OCO15, \
	OCO16, OCO17, OCO18, OCO19, OCO20, OCO21, OCO22, OCO23, OCO24, OCO25, OCO26, OCO27, OCO28, OCO29, OCO30, OCO31, \
	NOV1 = 305, NOV2, NOV3, NOV4, NOV5, NOV6, NOV7, NOV8, NOV9, NOV10, NOV11, NOV12, NOV13, NOV14, NOV15, \
	NOV16, NOV17, NOV18, NOV19, NOV20, NOV21, NOV22, NOV23, NOV24, NOV25, NOV26, NOV27, NOV28, NOV29, NOV30, \
	DEC1 = 335, DEC2, DEC3, DEC4, DEC5, DEC6, DEC7, DEC8, DEC9, DEC10, DEC11, DEC12, DEC13, DEC14, DEC15, \
	DEC16, DEC17, DEC18, DEC19, DEC20, DEC21, DEC22, DEC23, DEC24, DEC25, DEC26, DEC27, DEC28, DEC29, DEC30, DEC31
}date;
//数列降序排序(选择法) n为数组元素个数 
void float_array_queue(float array[], int n)
{
	int i, k, j;
	float b;
	for (i = 0; i < n; i++)
	{
		k = i;
		for (j = i + 1; j < n; j++)
		{
			if (array[j] > array[k])
			{
				k = j;
			}
		}
		if (k != i)
		{
			b = array[i];
			array[i] = array[k];
			array[k] = b;
		}
	}
}
//数组查找(二分法) 需要数组先进行排列 n为数组元素个数 m为要查找的数
int search(float array[], int n, float m)
{
	int a;
	int min, max;
	min = 0;
	max = n - 1;
	for (; array[(min + max) / 2] != m;)
	{
		if (array[(min + max) / 2] > m)
		{
			max = (min + max) / 2;
		}
		else if (array[(min + max) / 2] < m)
		{
			min = (min + max) / 2;
		}
	}
	a = (min + max) / 2;
	return a + 1;
}