//递归求阶乘(无限制 不完善)
#include <stdio.h>
void F(int n, int m);
int main()
{
    long long n = 1, m = 1;
    F(n, m);
}
void F(long long n, long long m)
{
    printf("%lld\n", n + m);
    if (n < m)
        F(n + m, m);
    else
        F(n + m, n);
}