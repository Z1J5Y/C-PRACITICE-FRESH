#include<stdio.h>

typedef struct stack
{
	int size,*base,*top;
}Stack;

void add(Stack &a);

int main()
{
	Stack b={0,NULL,NULL};
	add(b);
	printf("%d",b.size);
}
void add(Stack &a)
{
	a.size=15;
}