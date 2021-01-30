#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main()
{
	int *b = calloc(1, sizeof(int));
	scanf("%d",b);
	printf("%d",*b);

}