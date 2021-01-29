/*
本题要求实现一个简易连连看游戏模拟程序。

给定一个2N×2N的方阵网格游戏盘面，每个格子中放置一些符号。这些符号一定是成对出现的，同一个符号可能不止一对。
程序读入玩家给出的一对位置(x​1​​,y​1​​)、(x​2​​,y​2​​)，判断这两个位置上的符号是否匹配。
如果匹配成功，则将两个符号消为“*”并输出消去后的盘面；否则输出“Uh-oh”。若匹配错误达到3次，则输出“Game Over”并结束游戏。
或者当全部符号匹配成功，则输出“Congratulations!”，然后结束游戏。

输入格式：

输入在一行中给一个正整数N（<5）。随后2N行，每行2N个大写英文字母（其间以1个空格分隔），表示游戏盘面。
盘面之后给出一个正整数K，随后K行，每行按照格式“x​1​​ y​1​​ x​2​​ y​2​​”给出一个玩家的输入。注意格子的行、列编号是从1到2N。

输出格式：

根据玩家的每一步输入，输出相应的结果。输出盘面时注意，每行字符间以1个空格分隔，行末不得有多余空格。
输入样例1：

2
I T I T
Y T I A
T A T Y
I K K T
11
1 1 1 3
4 2 4 3
3 1 4 2
2 2 1 2
3 1 2 4
4 4 3 1
2 1 3 4
3 3 1 4
4 1 2 3
2 4 3 2
1 1 2 2

输出样例1：

* T * T
Y T I A
T A T Y
I K K T
* T * T
Y T I A
T A T Y
I * * T
Uh-oh
* * * T
Y * I A
T A T Y
I * * T
Uh-oh
* * * T
Y * I A
* A T Y
I * * *
* * * T
* * I A
* A T *
I * * *
* * * *
* * I A
* A * *
I * * *
* * * *
* * * A
* A * *
* * * *
Congratulations!

输入样例2：

2
I T I T
Y T I A
T A T Y
I K K T
5
1 1 4 4
1 1 2 3
1 1 2 3
2 2 4 1
2 2 3 3

输出样例2：

Uh-oh
* T I T
Y T * A
T A T Y
I K K T
Uh-oh
Uh-oh
Game Over
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

void print_map(char *array,int N);
int main()
{
    int N,count=0,i;
    char *a=NULL,temp;
    int m,n;
    scanf("%d",&N);
    if(a=(char*)malloc(4*N*N*sizeof(char))==NULL)
    {
        printf("error!");
        return 0;
    }
    a=(char*)memset(&a,' ',4*N*N*sizeof(char));
    i=N*N*2;
    srand((unsigned)time(NULL));
    printf("%c",*(a+2));
    /*do
    {
        printf("%d\n",i);
        m=rand()%(N*N*4);
        printf("%d\n",m);
        n=rand()%(N*N*4);
        temp=rand()%26+65;
        printf("%d,%d,%c",m,n,temp);
        if(*(a+m)==0&&*(a+n)==0&&m!=n)
        {
            *(a+m)=temp;
            *(a+n)=temp;
        }
        else
        {
            continue;
        }
        i-=1;
        printf("%d %d\n",m,n);
    }while (i>0);
    print_map(a,N);*/

    return 0;
}
void print_map(char *array,int N)
{
	if(N!=1)
	{
		for(int i=0;i<4*N*N;i++)
		{
			if(i>=N&&(i+1)%(2*N)==1)
			{
				printf("\n");
				printf("%c",*(array+i));
			}
			else if(i>=N&&(i+1)%(2*N)==0)
			{
				printf("%c",*(array+i));
			}
			else
			{
				printf("%c ",*(array+i));
			}
		}
	}
	else
	{
		printf("%c ",*(array));
		printf("%c\n",*(array+1));
		printf("%c ",*(array+2));
		printf("%c",*(array+3));
	}
}