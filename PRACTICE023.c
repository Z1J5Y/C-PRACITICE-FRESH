#include<stdio.h>

void QuickSort(int *,int,int);

int main()
{
    int a[10]={5,3,4,7,1,9,2,8,6,0},num;
    num=sizeof(a)/sizeof(a[0]);
    QuickSort(a,0,num);
    for(int i=0;i<10;i++) printf("%d ",a[i]);
    return 0;
}
void QuickSort(int *a,int left,int right)
{
    int i=right,j=left,n=(left+right)/2,t=0;
    int p1=a[n],p2=a[n],p3=a[n],p4=a[n];
    while(i>=j)
    {
        for(;a[i]>a[n];--i) p3=a[n];
        for(;a[j]<a[n];++j) p4=a[n];
        if(j<=i)
        {
            t=a[j];
            a[j]=a[i];
            a[i]=t;
            ++j;
            --i;
        }
    }
    if(i>left) QuickSort(a,left,i);
    if(j<right) QuickSort(a,j,right);
}