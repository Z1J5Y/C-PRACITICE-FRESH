//解二元一次方程
#include<stdio.h>
#include<math.h>
main()
{
	float a, b, c, answer, answer1, answer2, det;
	printf("输入a,b,c的值(a不为0):");
	scanf_s("%f,%f,%f",&a, &b, &c);
	if (b * b - 4 * a * c < 0)
	{
		printf("无实数解.");
	}
	else if(b * b - 4 * a * c == 0)
	{
		answer = (-b) / 2 * a;
		printf("有一解，为%f",answer);
	}
	else
	{
		det = pow(b * b - 4 * a * c, 1 / 2);
		answer1 = (-b + det) / 2 * a;
		answer2 = (-b - det) / 2 * a;
		printf("有两解:%f,%f", answer1, answer2);
	}
}