//草稿本
#include<stdio.h>
void main()
{
    int n=2;
    int a[n][n],(*pa)[2];
    pa=&a;
    **pa=1;
    *(*(pa)+1)=2;
    printf("%d",*(*(pa)+1));
}