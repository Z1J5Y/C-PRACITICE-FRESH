#include<stdio.h>
#include<math.h>
main()
{
	double rate = 0.0225;
	double deposit , n , capital , p;
	printf("��������(��)�ͱ���(Ԫ)��ʽ(��,Ԫ):");
	scanf_s("%lf,%lf", &n,&capital);
	getchar();
	p = pow((rate + 1), n);
	deposit = (capital * p);
	printf("������Ϊ��%lf", deposit);
}