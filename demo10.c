//大于一整数的最小素数
#include<stdio.h>
main()
{
	int input, output, i, j = 0;
	printf("输入正整数:");
	scanf_s("%d", &input);
	for (output = input + 1; !j; output++)
	{
		for (i = 2; i < output; i++)
		{
			j = output % i;
		}
	}
	printf("大于该正整数的最小素数为:%d", output);
}