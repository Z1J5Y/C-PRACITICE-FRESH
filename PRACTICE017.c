#include<stdio.h>
#include<stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2);

int main()
{
    struct ListNode *l1,*l2,*L3,*temp1,*temp2;
    l1=calloc(1,sizeof(struct ListNode));
    l2=calloc(1,sizeof(struct ListNode));
    l1->val=0;
    l1->next=calloc(1,sizeof(struct ListNode));
    l1->next->val=0;
    l1->next->next=calloc(1,sizeof(struct ListNode));
    l1->next->next->val=0;
    l1->next->next->next=NULL;
    l2->val=0;
    l2->next=calloc(1,sizeof(struct ListNode));
    l2->next->val=0;
    l2->next->next=calloc(1,sizeof(struct ListNode));
    l2->next->next->val=0;
    l2->next->next->next=NULL;
    L3=addTwoNumbers(l1,l2);
    for(;L3;L3=L3->next) printf("%d ",L3->val);
}
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
    struct ListNode *ret=calloc(1,sizeof(struct ListNode)),*temp=NULL,*L=NULL;
    int la=0,lb=0,lc;
    L=ret;
    temp=l1;
    for(int i=1;temp!=NULL;i*=10,temp=temp->next)
    {
        la+=temp->val*i;
    }
    temp=l2;
    for(int i=1;temp!=NULL;i*=10,temp=temp->next)
    {
        lb+=temp->val*i;
    }
    lc=la+lb;
    if(!lc)
    {
        ret->val=0;
        ret->next=NULL;
        return ret;
    }
    for(;lc;)
    {
        temp=(struct ListNode *)calloc(1,sizeof(struct ListNode));
        temp->val=lc%10;
        L->next=temp;
        L=temp;
        lc/=10;
    }
    L->next=NULL;
    return ret->next;
}