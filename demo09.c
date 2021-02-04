#include<stdio.h>

int result;


int *add(int ,int );
int main()
{
	int a=1,b=3;

	printf("%d",*add(a,b));

	return 0;
}
int *add(int x,int y)
{
	result=x+y;

	return &result;
}