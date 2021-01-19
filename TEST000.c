#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int a[5];
    int *ptr;
    if(*ptr=(int*)calloc(5,sizeof(int))==NULL)
    {
        printf("error");
        exit(1);
    }
    for(int i=0;i<5;i++)
    {
        ptr[i]=i;
        a[i]=i;
    }
    for(int i=0;i<5;i++)
    {
        printf("ptr[%d]=%d\n",i,ptr[i]);
        printf("a[%d]=%d\n",i,a[i]);
    }
    free(ptr);
    return 0;
}