#include<stdio.h>
#include<stdlib.h>
struct linkedlist
{
    int data;
    struct linkedlist *next;
};
typedef struct linkedlist LinkedList;

LinkedList *InputData(LinkedList *head);
LinkedList *QueueLinkedLinst(LinkedList *head);
void OutputData(LinkedList *head);

int main()
{
    LinkedList *head=NULL;
    head=InputData(head);
    head=QueueLinkedLinst(head);
    OutputData(head);
    free(head);
    return 0;
}
LinkedList *InputData(LinkedList *head)
{
    head=calloc(1,sizeof(LinkedList));
    LinkedList *r=head;
    for(int i=0;i<5;i++)
    {
        LinkedList *a=calloc(1,sizeof(LinkedList));
        scanf("%d",&(a->data));
        r->next=a;
        r=a;
    }
    return head;
}
LinkedList *QueueLinkedLinst(LinkedList *head)
{
    LinkedList *current,*last=NULL,*temp;
    for(;head->next!=last;last=current->next)
    {
        current=head;
        for(;current->next->next!=last;current=current->next)
        {
            if(current->next->data>current->next->next->data)
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
void OutputData(LinkedList *head)
{
    for(LinkedList *current=head->next;current!=NULL;current=current->next)
    {
        printf("%d ",current->data);
    }
}