//本题要求实现一个函数，用下列公式求cos(x)的近似值，精确到最后一项的绝对值小于e：
//cos(x)=x​0​​/0!−x​2​​/2!+x​4​​/4!−x​6​​/6!+⋯
#include<stdio.h>
#include<math.h>
double funcos( double e, double x );
int main(void)
{
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

    return 0;
}
double funcos(double e,double x)
{
    
}