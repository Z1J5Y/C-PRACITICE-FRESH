/*本题要求实现一个判断素数的简单函数，并利用该函数验证哥德巴赫猜想：
任何一个不小于6的偶数均可表示为两个奇素数之和。素数就是只能被1和自身整除的正整数。注意：1不是素数，2是素数。

函数接口定义：

int prime( int p );
void Goldbach( int n );

其中函数prime当用户传入参数p为素数时返回1，否则返回0；函数Goldbach按照格式“n=p+q”输出n的素数分解，其中p≤q均为素数。
又因为这样的分解不唯一（例如24可以分解为5+19，还可以分解为7+17），要求必须输出所有解中p最小的解。*/

#include <stdio.h>
#include <math.h>

int prime( int p );
void Goldbach( int n );

int main()
{
    int m, n, i, cnt;

    scanf("%d %d", &m, &n);
    if ( prime(m) != 0 ) printf("%d is a prime number\n", m);
    if ( m < 6 ) m = 6;
    if ( m%2 ) m++;
    cnt = 0;
    for( i=m; i<=n; i+=2 ) {
        Goldbach(i);
        cnt++;
        if ( cnt%5 ) printf(", ");
        else printf("\n");
    }

    return 0;
}
int prime( int p )
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
            if(p%i==0)
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
void Goldbach( int n )
{
    for(int i=2;i<n-1;i++)
    {
        if(prime(i))
        {
            if(prime(n-i))
            {
                printf("%d=%d+%d",n,i,n-i);
                break;
            }
        }
    }
}