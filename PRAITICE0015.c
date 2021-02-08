#include<stdio.h>
struct friends
{
	char name[20];
	long num;
	struct friends *next;
};
typedef struct friends Friends;
int main()
{
    Friends a;
    scanf("%d",&a.num);
    printf("%d\n",a.num);
    getchar();
    scanf("%s",a.name);
    printf("%s\n",a.name);
}