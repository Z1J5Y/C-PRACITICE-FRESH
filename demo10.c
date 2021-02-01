#include<stdio.h>
#include<stdlib.h>

int main()
{
	int j=0,*b=calloc(4,sizeof(int));
    scanf("%d %d %d %d", b + j, b + j + 1, b + j + 2, b + j + 3);
	printf("%d %d %d %d",*(b + j), *(b + j + 1), *(b + j + 2), *(b + j + 3));
	return 0;
}