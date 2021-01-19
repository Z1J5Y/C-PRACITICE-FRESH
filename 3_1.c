#include<stdio.h>
void queue(int *pa,int *pb,int *pc);
main()
{
	int *pa,*pb,*pc,a,b,c;
	pa=&a;
	pb=&b;
	pc=&c;
	printf("Input three integers:");
	scanf("%d,%d,%d",&a,&b,&c);
	queue(pa,pb,pc);
}
void queue(int *pa,int *pb,int *pc)
{
	int k;
	if(*pa<*pb)
	{
		k=*pa;
		*pa=*pb;
		*pb=k;
	}
	if(*pa<*pc)
	{
		k=*pa;
		*pa=*pc;
		*pc=k;
	}
	if(*pb<*pc)
	{
		k=*pb;
		*pb=*pc;
		*pc=k;
	}
	printf("\nOutput:%d %d %d\n",*pa,*pb,*pc);
}