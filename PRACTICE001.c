//��1��2��3��4�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�
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
					printf("���:%d\n", output);
				}
			}
		}
	}
}