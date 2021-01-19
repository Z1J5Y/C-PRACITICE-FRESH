#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 15
long fun(char *p);
main()
{
	char str[N];
	long result;
	printf("Input str:");
	gets(str);
	result=fun(str);
	printf("\n%ld",result);
}
long fun(char *p)
{
	int i,j=0;
	long result=0;
	i=strlen(p)-1;
	if(*p!='-')
	{
		for(;i>=0;i--)
		{
			result+=(*(p+i)-48)*pow(10,j);
			j++;
		}
	}
	else
	{
		for(;i>0;i--)
		{
			result+=(*(p+i)-48)*pow(10,j);
			j++;
		}
		result-=2*result;
	}
	return result;
}