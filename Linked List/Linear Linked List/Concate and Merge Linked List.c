#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*first=NULL,*second=NULL,*third=NULL;

void create(int A[],int n)
{
    int i;
    struct Node *temp,*last;
    first=(struct Node*)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;

    last=first;

    for(i=1; i<n; i++)
    {
        temp=(struct Node *)malloc(sizeof(struct Node));
        temp->data=A[i];
        temp->next=NULL;

        last->next=temp;
        last=temp;
    }
}

void createB(int B[],int n)
{
    int i;
    struct Node *temp,*last;
    second=(struct Node*)malloc(sizeof(struct Node));
    second->data=B[0];
    second->next=NULL;

    last=second;

    for(i=1; i<n; i++)
    {
        temp=(struct Node *)malloc(sizeof(struct Node));
        temp->data=B[i];
        temp->next=NULL;

        last->next=temp;
        last=temp;
    }
}

void displayList(struct Node * p)
{
    while(p!=NULL)
    {
        printf("%d  ",p->data);
        p=p->next;
    }
}

int countNode(struct Node *p)
{
    int count=0;
    while(p!=NULL)
    {
        count++;
        p=p->next;
    }
    return count;
}

void MergeList(struct Node *p,struct Node *q)
{
    struct Node *last;
    if(p->data<q->data)
    {
        third=last=p;
        p=p->next;
        third->next=NULL;
    }
    else
    {
        third=last=q;
        q=q->next;
        third->next=NULL;
    }
    while(p&&q)
    {
        if(p->data<q->data)
        {
            last->next=p;
            last=p;
            p=p->next;
            last->next=NULL;
        }
        else
        {
            last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;
        }
    }
    if(p)
        last->next=p;
    if(q)
        last->next=q;

}

int main()
{
    int A[]={2,5,6,7,8,9,10};
    int B[]={1,3,11,13,14,16,20};

    create(A,7);
    createB(B,7);

    ConcateList(first,second);

    MergeList(first,second);

    displayList(third);

    return 0;
}
