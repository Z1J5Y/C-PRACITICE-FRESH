#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    srand((unsigned)time(NULL));
    int m, n, N = 2;
    char temp;
    m = rand() % (N * N * 4);
    printf("%d\n", m);
    n = rand() % (N * N * 4);
    temp = rand() % 26 + 65;
    printf("%d,%d,%c", m, n, temp);
    return 0;
}