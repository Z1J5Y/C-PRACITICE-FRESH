//已知函数e^​x​​可以展开为幂级数1+x+x^​2​​/2!+x^​3​​/3!+⋯+x^​k​​/k!+⋯。
//现给定一个实数x，要求利用此幂级数部分和求e​^x​​的近似值，求和一直继续到最后一项的绝对值小于0.00001。
#include<stdio.h>
#include<math.h>

int cet(int x);

int cet(int x)
{
    if(x<=1)
    {
        return 1;
    }
    else
    {
        return x*cet(x-1);
    }
}
int main(void)
{
    double a=0,x;
    int count=0;
    scanf("%lf",&x);
    if((x>5)||(x<0))
    {
        return 0;
    }
    do
    {
        a+=1.0*pow(x,count)/cet(count);
        count++;
    }while((1.0*pow(x,count-1)/cet(count-1))>0.00001);
    printf("%.4lf",a);
    return 0;
}