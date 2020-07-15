#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*first=NULL;

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

void RemoveDuplicate(struct Node *p)
{
    struct Node *q=p->next;
    while(q!=NULL)
    {
        if(p->data!=q->data)
        {
            p=q;
            q=q->next;
        }
        else
        {
            p->next=q->next;
           free(q);
           q=p->next;
        }
    }
}

void ReverseList(struct Node *p)   // first Method Using Array
{
    int *A,i=0;
    A=(int *)malloc(sizeof(int)*countNode(p));
    struct Node *q=p;
    while(q!=NULL)
    {
        A[i]=q->data;
        q=q->next;
        i++;
    }
    q=p;
    i--;
    while(q!=NULL)
    {
        q->data=A[i];
        q=q->next;
        i--;
    }
}

void ReverseList2(struct Node *p)   // Second Method Using Pointer
{
    struct Node *q=NULL,*r=NULL;
        while(p!=NULL)
        {
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        first=q;
}


int main()
{
    struct Node *temp;
    int A[]={2,5,6,7,8,9,10};
    int B[]={1,3,11,13,14,16,20};

    create(A,7);
  
    RemoveDuplicate(first);

    ReverseList(first);   // First Method using Array

    ReverseList2(first);    // Second Method Using Pointer
    
    displayList(first);

    return 0;
}
