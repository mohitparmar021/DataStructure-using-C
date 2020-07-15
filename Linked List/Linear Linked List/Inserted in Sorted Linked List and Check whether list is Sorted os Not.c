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


void insertInSortedList(struct Node *p ,int x)
{
    struct Node *temp,*q=NULL;
    temp=(struct Node *)malloc(sizeof(struct Node));
    temp->data=x;
    temp->next=NULL;

    if(first==NULL)
    {
       first=temp;
    }
    else
    {
        while(p && p->data<x)
        {
            q=p;
            p=p->next;
        }
        if(p==first)
        {
            temp->next=first;
            first=temp;
        }
        else
        {
            temp->next=p;
            q->next=temp;
        }

    }
}

int isSorted(struct Node *p)
{
    int x=-32768;
    while(p!=NULL)
    {
        if(p->data<x)
            return 0;
        x=p->data;
        p=p->next;
    }
    return 1;
}


int main()
{
    struct Node *temp;
    int A[]={2,5,6,7,8,9,10};

    create(A,7);
 
    insertInSortedList(first,33);

    int t=isSorted(first);
    if(t>0)
        printf("\nLinked List is Sorted");
    else
        printf("\nLinked List is Not Sorted");
    
    return 0;
}
