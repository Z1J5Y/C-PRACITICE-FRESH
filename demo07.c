#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char *a=NULL;
	a=malloc(10*sizeof(char));
	memset(a,0,10*sizeof(char));
	for(int i=0;i<10;i++)
	{
		printf("%d ",*(a+1));
	}
	free(a);
	return 0;
}