#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*Head=NULL;

void create(int A[],int n)
{
   struct Node *temp,*last;
   int i;
   Head=(struct Node*)malloc(sizeof(struct Node));
   Head->data=A[0];
   Head->next=Head;

   last=Head;

    for(i=1; i<n; i++)
    {
        temp=(struct Node *)malloc(sizeof(struct Node));
        temp->data=A[i];
        temp->next=last->next;
        last->next=temp;
        last=temp;
    }
}

int Length(struct Node *p)
{
    int count=0;
    do{
        count++;
        p=p->next;
    }while(p!=Head);

    return count;
}

void DisplayList(struct Node *p)
{
    do
    {
        printf("%d ",p->data);
        p=p->next;
    }while(p!=Head);
}

void InsertNode(struct Node *p,int index,int x)
{
    struct Node *temp;
    int i;

    if(index<0 || index>Length(p))
        return;

    if(index==0)
    {
        temp=(struct Node *)malloc(sizeof(struct Node));
        temp->data=x;
        if(Head==NULL)
        {
            Head=temp;
            Head->next=Head;
        }
        else
        {
             while(p->next!=Head)
                p=p->next;

             p->next=temp;
             temp->next=Head;
             Head=temp;
        }
    }
    else
    {
          for(i=0; i<index-1; i++)
          {
              p=p->next;
          }
           temp=(struct Node *)malloc(sizeof(struct Node));
           temp->data=x;
           temp->next=p->next;
           p->next=temp;
    }
}

int DeleteNode(struct Node *p,int index)
{
    struct Node *q;
    int i,x;

    if(index<0 || index>Length(p))
        return;

    if(index==1)
    {
         while(p->next!=Head)
            p=p->next;
         x=Head->data;

         if(Head==p)
         {
             free(Head);
             Head=NULL;
         }
         else
        {
          p->next=Head->next;
          free(Head);
          Head=p->next;
        }
    }
    else
    {
         for(i=0; i<index-2; i++)
         {
             p=p->next;
         }
         q=p->next;
         p->next=q->next;
         x=q->next;
         free(q);

    }
    return x;
}


int main()
{
   int A[]={2,4,6,8,10,12};

    create(A,6);

    InsertNode(Head,3,30);

    DeleteNode(Head,5);

    DisplayList(Head);

   printf("\n%d count",Length(Head));
    return 0;
}
