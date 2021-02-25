#include<stdio.h>
#include<stdlib.h>

typedef struct
{
    int *elem;
    int length;
    int listsize;
}SqList;

SqList InitSqList(SqList);
SqList InsertElem(SqList,int,int);
SqList DeleteElem(SqList,int,int);

int main()
{
    SqList a;
}
void InitSqList(SqList *a)
{
    scanf("%d",&a->length);
    a.listsize=a.length*sizeof(int);
    a.elem=(int *)calloc(1,a.listsize);
}
void InsertElem(SqList *a,int i,int e)
{
    if(i<1||i>(a->length+1))
    {
        printf("error");
        exit(1);
    }
    a->length+=1;
    a->listsize=a->length*sizeof(int);
    a->elem=realloc(a->elem,a->listsize);
    for(int j=a->length-1;j>i-1;j--)
    {
        *(a->elem+j)=*(a->elem+j-1);
    }
    *(a->elem+i-1)=e;
}
void DeleteElem(SqList *a,int i,int *e)
{
    if(i<1||i>a->length)
    {
        printf("error");
        exit(1);
    }
    a->length-=1;
    a->listsize=a->length*sizeof(int);
    int *temp=calloc(1,sizeof(a->listsize));
    for(int j=0;j<=a->length;j++)
    {
        if(j>=i) *(temp+j)=*(a->elem+j);
        else *(temp+j)=*(a->elem+j+i);
    }
    free(a->elem);
    a->elem=temp;
}