#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct friends
{
	char name[20];
	long num;
	struct friends *ptr;
};
typedef struct friends Friends;

void InputData(Friends);
void OutputData(Friends);
int main()
{
	Friends temp;
	for(;;)
	{
		printf("Input the num:\n");
		scanf("%d\n",&temp.num);
		if(temp.num==-1)
		{
			break;
		}
		printf("Input the name:\n");
		scanf("%s\n",temp.name);
		InputData(temp);
	}


	return 0;
}
void InputData(Friends a)
{
	

}