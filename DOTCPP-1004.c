/*
题目描述

有一头母牛，它每年年初生一头小母牛。每头小母牛从第四个年头开始，每年年初也生一头小母牛。请编程实现在第n年的时候，共有多少头母牛？
输入

输入数据由多个测试实例组成，每个测试实例占一行，包括一个整数n(0<n<55)，n的含义如题目中描述。
n=0表示输入数据的结束，不做处理。
输出

对于每个测试实例，输出在第n年的时候母牛的数量。
每个输出占一行。


样例输入

2
4
5
0

样例输出

2
4
6
*/
#include<stdio.h>

int CowNum(int);

int main()
{
    int a;
    while(1)
    {
        scanf("%d",&a);
        if(a>=55||a<=0) return 0;
        if(!a) return 0;
        printf("%d",CowNum(a));
    }
}
int CowNum(int a)
{
    if(a<=3) return a;
    else return CowNum(a-1)+CowNum(a-3);
}