/*
题目描述
编写程序，输入一个正整数n，求下列算式的值。要求定义和调用函数fact(k)计算k的阶乘，函数返回值的类型是double。
1+1/2+ .... +1/n!
输出保留5位小数。
输入
无
输出
无
样例输入
5
样例输出
sum=1.71667
*/
#include<stdio.h>
#include<stdlib.h>

double fact(int k);

int main()
{
    int n;
    double sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum+=1/fact(i);
    }
    printf("sum=%.5lf",sum);
    return 0;
}
double fact(int k)
{
    if(k==1) return 1;
    else if(k<1) exit(-1);
    else return fact(k-1)*k;
}