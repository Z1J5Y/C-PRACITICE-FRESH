#include<stdio.h>
#include<stdlib.h>

void main()
{
	int *a=calloc(4,sizeof(int));
	*a=1;
	*(a+1)=2;
	*(a+2)=2;
	for(int i=0;i<4;i++)
	{
		printf("%d\n",*(a+i));
	}
}