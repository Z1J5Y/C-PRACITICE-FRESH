//给定某数字A（1≤A≤9）以及非负整数N（0≤N≤100000），求数列之和S=A+AA+AAA+⋯+AA⋯A（N个A）。例如A=1, N=3时，S=1+11+111=123。
#include<stdio.h>
#include<math.h>

int main(void)
{
    int A,N;
    long S=0;

    scanf("%d%d",&A,&N);
    if((A<1)||(A>9)) return 0;

    for(int i=1;i<=N;i++)
    {
        for(int j=0;j<i;j++)
        {
            S+=A*pow(10,j);
        }
    }
    printf("%ld",S);
    return 0;
}
