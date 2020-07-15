#include <stdio.h>
#include <stdlib.h>

struct Node
{
     int data;
     struct Node *prev;
    struct Node *next;
}*first=NULL;

void create(int A[],int n)
{
    struct Node *temp,*last;
    int i;
    first=(struct Node *)malloc(sizeof(struct Node));
    first->data=A[0];
    first->prev=first->next=NULL;
    last=first;

    for(i=1; i<n; i++)
    {
         temp=(struct Node *)malloc(sizeof(struct Node));
         temp->data=A[i];
         temp->next=last->next;
         temp->prev=last;
         last->next=temp;
         last=temp;
    }
}

int Length(struct Node *p)
{
    int len=0;
    while(p)
    {
        len++;
        p=p->next;
    }
    return len;
}

void Display(struct Node *p)
{
      while(p!=NULL)
    {
       printf("%d  ",p->data);
       p=p->next;
    }
}

void InsertNode(struct Node *p,int index,int x)
{
    struct Node * temp;
    int i;
    if(index<0 || index>Length(p))
        return;

    if(index==0)
    {
         temp=(struct Node *)malloc(sizeof(struct Node));
         temp->data=x;
         temp->prev=NULL;
         temp->next=first;
         first->prev=temp;
         first=temp;
    }
    else
    {
        for(i=0; i<index-1; i++)
        {
            p=p->next;
        }
         temp=(struct Node *)malloc(sizeof(struct Node));
         temp->data=x;

         temp->prev=p;
         temp->next=p->next;
         if(p->next)
            p->next->prev=temp;
         p->next=temp;
    }
}

int DeleteNode(struct Node *p,int index)
{
    struct Node *q;
    int x=-1,i;
    if(index<0 || index>Length(p))
        return;
    if(index==1)
    {
        first=first->next;
        if(first)
            first->prev=NULL;
        x=p->data;
        free(p);
    }
    else
    {
        for(i=0; i<index-1; i++)
            p=p->next;

        p->prev->next=p->next;

        if(p->next)
            p->next->prev=p->prev;

        x=p->data;
        free(p);
    }
    return  x;
}

void ReverseList(struct Node *p)
{
    struct Node *temp;
    while(p!=NULL)
    {
        temp=p->next;
        p->next=p->prev;
        p->prev=temp;
        p=p->prev;

        if(p!=NULL && p->next==NULL)
        {
            first=p;
        }

    }
}

int main()
{
   int  A[]={2,4,6,8,10,12};
   create(A,6);


   InsertNode(first,6,100);

   printf("\n%d is Deleted ",DeleteNode(first,5));

   Display(first);

   ReverseList(first);

   printf("\nNodeCount %d",Length(first));

    return 0;
}
