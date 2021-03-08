#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
    Friends *pa1;
    strcpy(a.name,"q\0");
    a.num=1;
    a.next=&a;
    pa1=&a;
    printf("%d %s %d %s",pa1->num,pa1->name,a.next->num,a.next->name);
    return 0;
}