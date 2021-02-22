/*
问题描述
　　十六进制数是在程序设计时经常要使用到的一种整数的表示方式。
它有0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F共16个符号，分别表示十进制数的0至15。
十六进制的计数方法是满16进1，所以十进制数16在十六进制中是10，而十进制的17在十六进制中是11，以此类推，十进制的30在十六进制中是1E。
　　给出一个非负整数，将它表示成十六进制的形式。
输入格式
　　输入包含一个非负整数a，表示要转换的数。0<=a<=2147483647
输出格式
　　输出这个整数的16进制表示
样例输入
30
样例输出
1E
*/

#include<stdio.h>
#include<math.h>

void Translate(long);

int main()
{
    long a;
    scanf("%ld",&a);
    if(a>2147483647||a<0) return 0;
    Translate(a);
    return 0;
}
void Translate(long a)
{
    char t[10]={0};
    long c=a/16,y=a%16;
    int count=0,i;
    for(i=0;c!=0;i++)
    {
        switch (y)
        {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9: t[i]=y+48; break;
            case 10: t[i]='A'; break;
            case 11: t[i]='B'; break;
            case 12: t[i]='C'; break;
            case 13: t[i]='D'; break;
            case 14: t[i]='E'; break;
            case 15: t[i]='F'; break;
        }
        y=c%16;
        c/=16;
    }
    for(;t[count]!=0;count++);
    printf("%d",y);
    for(i=count;i>=0;i--) printf("%c",t[i]);
}