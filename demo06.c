#include<stdio.h>
#include<stdlib.h>

void main()
{
	char *a=calloc(4,sizeof(char));
	*a=97;
	*(a+1)=98;
	*(a+2)=99;
	for(int i=0;i<4;i++)
	{
		printf("%c\n",*(a+i));
	}
	printf("%u",sizeof(int *));
}