//����һ��������С����
#include<stdio.h>
main()
{
	int input, output, i, j = 0;
	printf("����������:");
	scanf_s("%d", &input);
	for (output = input + 1; !j; output++)
	{
		for (i = 2; i < output; i++)
		{
			j = output % i;
		}
	}
	printf("���ڸ�����������С����Ϊ:%d", output);
}