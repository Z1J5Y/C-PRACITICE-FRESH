#include<stdio.h>
#include<stdlib.h>

struct date
{
    int year;
    int month;
    int day;
    struct date *next;
};
typedef struct date Date;

Date *Queue(Date *);

int main()
{
    Date *head=calloc(1,sizeof(Date));
    for(int i=0;i<10;i++)
    {
        Date *temp=calloc(1,sizeof(Date));
        temp->year=2000;
        temp->day=i;
        temp->month=i*7%6+1;
        temp->next=head->next;
        head->next=temp;
    }
    head=Queue(head);
    for(Date *temp=head->next;temp!=NULL;temp=temp->next)
    {
        printf("%d %d %d\n",temp->year,temp->month,temp->day);
    }
    return 0;
}
Date *Queue(Date *head)
{
    Date *pCure=NULL,*temp,*current;
    for(;head->next!=pCure;pCure=current->next)
    {
        current=head;
        for(;current->next->next!=pCure;current=current->next)
        {
            if(current->next->month>current->next->next->month)
            {
                temp=current->next->next->next;
                current->next->next->next=current->next;
                current->next=current->next->next;
                current->next->next->next=temp;
            }
        }
    }
    return head;
}