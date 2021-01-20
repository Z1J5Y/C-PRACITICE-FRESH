//本题要求实现一个函数，用下列公式求cos(x)的近似值，精确到最后一项的绝对值小于e：
//cos(x)=x​^0​​/0!−x^​2​​/2!+x​^4​​/4!−x​^6​​/6!+⋯
//输入样例 : 0.01  -3.14
//输出样例 cos(3.14)= -0.999899
#include <stdio.h>
#include <math.h>

double funcos( double e, double x );

int main()
{    
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

    return 0;
}

/* 你的代码将被嵌在这里 */
double funcos(double e,double x)
{
    int a;
    double sum=0;
    for(int i=0;pow(x,2*i)/(2*i)>=e;i++)
    {
        if(i<1)
        {
            sum+=1;
        }
        else
        {
            a=1;
            for(int j=1;j<=2*i;j++)
            {
                a*=j;
            }
            sum+=pow(-1,i)*pow(x,2*i)/2*i;
        }
    }
    return sum;
}