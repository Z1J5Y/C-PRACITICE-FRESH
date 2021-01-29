
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int n,m,N=2;
	srand((unsigned)time(NULL));
    m=(int)rand()%(2*N);
    n=(int)rand()%(2*N);
	printf("%d %d",m,n);
}