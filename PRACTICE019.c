#include<stdio.h>

typedef struct polynomial
{
    int coefficient,index;
    struct polynomial *next;
}Polynomial;

void InitPolynomial(Polynomial*);

int main()
{
    Polynomial *a;
    InitPolynomial(a);
}
void InitPolynomial(Polynomial *a)
{
    a=calloc(1,sizeof(Polynomial));
    
}