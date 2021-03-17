#include<stdio.h>
#include<stdlib.h>





int main()
{
    char *a,i=0;
    gets(a);
    for(i=0;*(a+i)!=0;++i) printf("%c ",*(a+i));
    
}