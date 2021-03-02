#include<stdio.h>
#include<stdlib.h>

typedef struct
{
    int *elem;
    int length;
    int listsize;
}SqList;

SqList InitSqList(SqList);
void InsertElem(SqList *,int,int);
void DeleteElem(SqList *,int,int *);

int main()
{
    SqList a;
    int temp,location,value,*delete=NULL;
    a=InitSqList(a);
    for(int i=0;i<a.length;i++)
    {
        scanf("%d",&temp);
        *(a.elem+i)=temp;
    }
    scanf("%d %d",&location,&value);
    InsertElem(&a,location,value);
    scanf("%d",&location);
    DeleteElem(&a,location,delete);
    for(int i=0;i<a.length;i++)
    {
        printf("%d ",*(a.elem+i));
    }
    return 0;
}
SqList InitSqList(SqList a)
{
    scanf("%d",&a.length);
    a.listsize=a.length*sizeof(int);
    a.elem=(int *)calloc(1,a.listsize);
    return a;
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
    a->elem=(int *)realloc(a->elem,a->listsize);
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
    *e=*(a->elem+i-1);
    a->length-=1;
    a->listsize=a->length*sizeof(int);
    int *temp=(int *)calloc(1,sizeof(a->listsize));
    for(int j=0;j<=a->length;j++)
    {
        if(j<i-1) *(temp+j)=*(a->elem+j);
        else *(temp+j)=*(a->elem+j+i);
    }
    free(a->elem);
    a->elem=temp;
}