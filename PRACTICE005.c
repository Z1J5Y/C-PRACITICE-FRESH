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

Friends *InputData(Friends*);
void OutputData(Friends*);

int main()
{
	Friends *head;
	head=InputData(head);
	OutputData(head);
	printf("%d",head->num);
	return 0;
}
Friends *InputData(Friends *head)
{
	head=(Friends *)calloc(1,sizeof(Friends));
	Friends *t=head;
	while(1)
	{
		Friends *element=(Friends *)calloc(1,sizeof(Friends));
		printf("Input the num:\n");
		scanf("%d",&(element->num));
		if(element->num==-1)
		{
			break;
		}
		printf("Input the name:\n");
		scanf("%s",element->name);
		element->next=t->next;
		t->next=element;
	}
	return head;
}
void OutputData(Friends* head)
{
	for(Friends *current=head;current!=NULL;current=current->next)
	{
		
		printf("%d %s\n",current->num,current->name);
	}
}