#include<stdio.h>
#include<stdlib.h>

typedef struct polynomial
{
    int coefficient,index;
    struct polynomial *next;
}Polynomial;

void CreatPolynomial(Polynomial*);
void OutputPolynomial(Polynomial*);


int main()
{
    Polynomial *a;
    CreatPolynomial(a);
    OutputPolynomial(a);

    return 0;
}
void CreatPolynomial(Polynomial *a)
{
    int t_index,t_coefficient;
    Polynomial *t,*m;
    a=calloc(1,sizeof(Polynomial));
    m=a;
    while(1)
    {
        scanf("%d %d",&t_coefficient,&t_index);
        t=calloc(1,sizeof(Polynomial));
        t->coefficient=t_coefficient;
        t->index=t_index;
        m->next=t;
        m=t;
        if(t_index==0) break;
    }
    m->next=NULL;
}
void OutputPolynomial(Polynomial *a)
{
    for(Polynomial *t=a->next;t!=NULL;t=t->next)
    {
        printf("%d %d\n",t->coefficient,t->index);
    }
}