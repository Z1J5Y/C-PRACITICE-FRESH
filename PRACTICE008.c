//¾Å¾Å³Ë·¨±í
#include <stdio.h>
int main()
{
    int a, b;
    a = 1;
    b = 1;
    for (a = 1; a < 10; a += 1)
    {
        for (b = 1; b <= a; b += 1)
        {
            printf("%d * %d = %d ", a, b, a * b);
        }
        printf("\n");
    }
    return 0;
}