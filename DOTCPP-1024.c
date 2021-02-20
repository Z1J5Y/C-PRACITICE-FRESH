/*

题目描述

一个数如果恰好等于不包含它本身所有因子之和，这个数就称为"完数"。 例如，6的因子为1、2、3，而6=1+2+3，因此6是"完数"。
编程序找出N之内的所有完数，并按下面格式输出其因子
输入

N
输出

? its factors are ? ? ?
样例输入

1000

样例输出

6 its factors are 1 2 3
28 its factors are 1 2 4 7 14
496 its factors are 1 2 4 8 16 31 62 124 248
*/
#include<stdio.h>
#include<stdlib.h>

void PerfectNum(int );

int main()
{
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
    {
        PerfectNum(i);
    }
}
void PerfectNum(int n)
{
    int a[100],count=0,sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            a[count]=i;
            count++;
        }
    }
    for(int i=0;i<count;i++)
    {
        sum+=a[i];
    }
    if(sum==n)
    {
        printf("%d its factors are ",n);
        for(int i=0;i<count;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
    }
}