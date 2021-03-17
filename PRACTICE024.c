#include<stdio.h>
#include<stdlib.h>
#define InitSize 10
#define AddSize 10

typedef struct Stack
{
    int *base,*top,num;
}stack;

void InitStack(stack *a);
void DestroyStack(stack *a);
void ClearStack(stack *a);
void Push(stack *a,int b);

int main()
{
    int *e;
    stack a;
    InitStack(&a);
    DestroyStack(&a);
    return 0;
}
void InitStack(stack *a)
{
    (*a).base=malloc(InitSize*sizeof(int));
    (*a).top=a->base;
    (*a).num=0;
}
void DestroyStack(stack *a)
{
    free((*a).base);
    (*a).base=NULL;
    (*a).top=(*a).base;
    (*a).num=0;
}
void ClearStack(stack *a)
{
    (*a).top=(*a).base;
    (*a).num=0;
}
void Push(stack *a,int b)
{
    if((*a).top-(*a).base>=(*a).num) (*a).base=realloc((*a).base,AddSize*sizeof(int));
    (*a).top=(*a).base+(*a).num;
    *(*a).top++=b;
}