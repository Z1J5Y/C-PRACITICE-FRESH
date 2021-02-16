/*
题目描述

输入10个整数，求它们的平均值，并输出大于平均值的数据的个数。
输入

10个数
输出

大于平均数的个数
样例输入

1 2 3 4 5 6 7 8 9 10

样例输出

5
*/
#include<stdio.h>

int main()
{
    int a[10],sum=0,count=0;
    float avg;
    for(int i=0;i<10;i++) 
    {
        scanf("%d",a+i);
        sum+=*(a+i);
    }
    avg=sum/10;
    for(int i=0;i<10;i++)
    {
        if(*(a+i)>avg) count+=1;
    }
    printf("%d",count);
}