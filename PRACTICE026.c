#include<stdio.h>

typedef struct stack
{
    int size;
    int *base,*top;
}Stack;

void InitStack(Stack *a);
void ClearStack(Stack *a);

int main()
{
    
}
void InitStack(Stack *a)
{
    (*a).base=NULL;
    (*a).top=(*a).base;
    (*a).size=0;
}
void ClearStack(Stack *a)
{
    
}