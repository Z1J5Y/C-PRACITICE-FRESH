#include<stdio.h>

void Sort(int *);

int main()
{
    int a[10]={0,2,6,5,3,7,1,8,9,4};
    Sort(a);
    for(int i=0;i<10;++i) printf("%d ",a[i]);
}
void Sort(int *a)
{
    int i,j,t,temp;
    for(i=0;i<10;++i)
    {
        t=i;
        for(j=i+1;j<10;++j)
        {
            if(a[j]>a[t]) t=j;
        }
        if(t!=i)
        {
            temp=a[i];
            a[i]=a[t];
            a[t]=temp;
        }
    }
}