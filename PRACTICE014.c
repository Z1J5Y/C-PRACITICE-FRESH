//
// Created by Administrator on 2021/2/13.
//

#include<stdio.h>

void Bubble_sort(int array[],int n);

int main()
{
    int a[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    Bubble_sort(a,5);
    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
void Bubble_sort(int array[],int n)
{
    float b;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(array[i]>array[j])
            {
                b=array[i];
                array[i]=array[j];
                array[j]=b;
            }
        }
    }
}