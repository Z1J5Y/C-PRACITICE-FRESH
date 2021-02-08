
#include<stdio.h>

int prime_num(int);

int main()
{
    int a,count=0;
    scanf("%d",&a);
    if(a>1e5) return 0;
    for(int i=3;i<=a;i++)
    {
        if(prime_num(i))
        {
            if(prime_num(i-2))
            {
                count++;
            }
        }
    }
    printf("%d",count-1);
    return 0;
}
int prime_num(int a)
{
    if(a>3)
    {
        if(!(a%2))
        {
            return 0;
        }
        else
        {
            int count=0;
            for(int i=3;i<a;i++)
            {
                if(a%i==0) count++;
            }
            if(!count)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
    }
    else
    {
        return 1;
    }
}