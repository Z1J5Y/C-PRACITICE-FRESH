//����������x,y,z���������������С���������
#include<stdio.h>
main()
{
	int  i, k, j;
	float S[3],temp;
	printf("Input x,y,z:");
	scanf_s("%f,%f,%f", &S[0], &S[1], &S[2]);
	for (i = 0; i < 3; i++)
	{
		k = i;
		for (j = i+1; j < 3; j++)
		{
			if (S[k] >= S[j])
			{
				k = j;
			}
		}
		temp = S[i];
		S[i] = S[k];
		S[k] = temp;
	}
	printf("\n��С��������Ϊ:%f,%f,%f", S[0], S[1], S[2]);
}