#include<stdio.h>
#include<math.h>

int main()
{
    long a=0;
    int i=0;
    enum
    {
        A=10,B,C,D,E,F    
    };
    scanf("%ld",&a);
    if(a<0||a>2147483647) return 0;
    for(i=0;(i+1)*16>a&&i*16<a;i++)
    {
        
    }
    return 0;
}