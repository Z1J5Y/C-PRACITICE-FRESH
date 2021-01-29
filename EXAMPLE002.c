#include<stdio.h>
void main()
{
	int a[2][2],(*pa)[2];
	pa=a;
	**pa=1;
	*(*pa+1)=2;
	**(pa+1)=3;
	*(*(pa+1)+1)=4;
	printf("%d %d %d %d",a[0][0],a[0][1],a[1][0],a[1][1]);
}