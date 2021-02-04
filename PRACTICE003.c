#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Book
{
	char authur[20];
	char title[25];
	int num;
};

int main()
{
	struct Book *b[10];

	b[0]=calloc(1,sizeof(struct Book));
	strcpy(b[0]->authur,"qiu ruoyu");
	strcpy(b[0]->title,"Cyuyan lian xi");
	b[0]->num=1;
	printf("%s,%s,%d",b[0]->authur,b[0]->title,b[0]->num);

	return 0;
}