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


void insertNode(struct Node *p,int index,int x)
{
    int i;
    struct Node * temp;

    if(index<0 || index>countNode(p))
        return;

    temp=(struct Node *)malloc(sizeof(struct Node));
    temp->data=x;

    if(index==0)
    {
        temp->next=first;
        first=temp;
    }
    else
    {
          for(i=0; i<index-1; i++)
          {
              p=p->next;
          }
          temp->next=p->next;
          p->next=temp;
    }
}

int deleteNode(struct Node *p,int index)
{
    struct Node *q=NULL;
        int x=-1,i;
        if(index<1 || index>countNode(p))
            return -1;
        if(index==1)
        {
            q=first;
            x=first->data;
            first=first->next;
            free(q);
            return x;
        }
        else
        {
            for(i=0; i<index-1; i++)
            {
               q=p;
               p=p->next;
            }
            q->next=p->next;
            x=p->data;
            free(p);

            return x;
        }

}

int main()
{

   int A[]={2,5,6,7,8,9,10};
   
    create(A,7);   // creating Linked List  from  given List

    insertNode(first,2,30);   // Insert node at any Location

   printf("Deleted Value  %d ", deleteNode(first,4));   // delete node at any Position

   displayList(first);    // Display all element

   printf("\n %d ",countNode(first));       // Counting Node from Linked List

    return 0;
}
