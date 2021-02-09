/*

题目描述

输入两个正整数m和n(m<n)，求m到n之间(包括m和n)所有素数的和，要求定义并调用函数isprime(x)来判断x是否为素数(素数是除1以外只能被自身整除的自然数)。

输入

m n
输出

素数和
样例输入

2 3

样例输出

5

*/
#include<stdio.h>

int isprime( int p )
{
    int count=0;
    if(p<2)
    {
        return 0;
    }
    else if(p<4) return 1;
    else
    {
        for(int i=2;i<p;i++)
        {
            if(!(p%i))
            {
                return 0;
            }
            else
            {
                count+=1;
            }
        }
        if(count==p-2) return 1;
    }
}
int main()
{
    int a,b,sum=0;
    scanf("%d %d",&a,&b);
    if(a>b) return 0;
    for(int i=a;i<=b;i++)
    {
        if(isprime(i))
        {
            sum+=i;
        }
    }
    printf("%d",sum);
    return 0;
}