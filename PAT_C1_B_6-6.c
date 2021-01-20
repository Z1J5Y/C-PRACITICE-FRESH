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

/* 你的代码将被嵌在这里 */
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