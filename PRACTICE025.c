#include<stdio.h>

void QuickSort(int *array,int left,int right)
{
    int p=(right+left)/2,i=right,j=left,t=0;
    int point=array[p];
    while(i>=j)
    {
        for(;array[j]<point;++j);
        for(;array[i]>point;--i);
        if(j<=i)
        {
            t=array[j];
            array[j]=array[i];
            array[i]=t;
            ++j;
            --i;
        }
    }
    if(i>left) QuickSort(array,left,i);
    if(j<right) QuickSort(array,j,right);
}

int main()
{
    int a[10]={5,3,4,7,1,9,2,8,6,0};
    QuickSort(a,0,10);
    for(int i=0;i<10;++i)
    {
        printf("%d ",a[i]);
    }
    return 0;
}