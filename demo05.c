//���Ԫһ�η���
#include<stdio.h>
#include<math.h>
main()
{
	float a, b, c, answer, answer1, answer2, det;
	printf("����a,b,c��ֵ(a��Ϊ0):");
	scanf_s("%f,%f,%f",&a, &b, &c);
	if (b * b - 4 * a * c < 0)
	{
		printf("��ʵ����.");
	}
	else if(b * b - 4 * a * c == 0)
	{
		answer = (-b) / 2 * a;
		printf("��һ�⣬Ϊ%f",answer);
	}
	else
	{
		det = pow(b * b - 4 * a * c, 1 / 2);
		answer1 = (-b + det) / 2 * a;
		answer2 = (-b - det) / 2 * a;
		printf("������:%f,%f", answer1, answer2);
	}
}