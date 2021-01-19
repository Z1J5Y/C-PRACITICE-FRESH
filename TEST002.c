//草稿本
#include<stdio.h>
void main()
{
    char a=0,b=0;
    int *p=(int *)&b;
    
    *p=259;

    printf("%d %d",a,b);
}
