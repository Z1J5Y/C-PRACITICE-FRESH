#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void print_map(char *array,int N);
int main()
{
	char *a=NULL;
	a=(char*)calloc(4,sizeof(char));
	*a='a';
	*(a+1)='b';
	*(a+2)='c';
	*(a+3)='d';
	print_map(a,1);
}
void print_map(char *array,int N)
{
	if(N!=1)
	{
		for(int i=0;i<4*N*N;i++)
		{
			if(i>=N&&(i+1)%(2*N)==1)
			{
				printf("\n");
				printf("%c",*(array+i));
			}
			else if(i>=N&&(i+1)%(2*N)==0)
			{
				printf("%c",*(array+i));
			}
			else
			{
				printf("%c ",*(array+i));
			}
		}
	}
	else
	{
		printf("%c ",*(array));
		printf("%c\n",*(array+1));
		printf("%c ",*(array+2));
		printf("%c",*(array+3));
	}
}