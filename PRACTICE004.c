#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Node
{
    int a;
    struct Node *b;
}node;
int main()
{
    int count=0;
	node *a1=calloc(1,sizeof(node)),*a2=calloc(1,sizeof(node)),*a3=calloc(1,sizeof(node)),*a4=calloc(1,sizeof(node));
    a1->a=1;
    a2->a=2;
    a3->a=3;
    a4->a=4;
    a1->b=a2;
    a2->b=a3;
    a3->b=a4;
    a4->b=NULL;
    for(node *ptr=a1;ptr!=NULL;count++)
    {
        ptr=ptr->b;
    }
    printf("%d",count);
    }