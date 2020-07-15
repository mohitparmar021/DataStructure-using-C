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

struct Node * LinearSearch(struct Node *p,int key)
{
      while(p!=NULL)
      {
          if(key==p->data)
            return (p);
          p=p->next;
      }
      return NULL;
}

int sumOfNode(struct Node *p)
{
    int sum=0;
    while(p!=NULL)
    {
        sum = sum + p->data;
        p=p->next;
    }
    return sum;
}

int Maximum(struct Node *p)
{
    int max=-32768;
    while(p!=NULL)
    {
        if(p->data>max)
            max=p->data;
        p=p->next;
    }
    return max;
}

int main()
{
    struct Node *temp;
    int A[]={2,5,6,7,8,9,10};
    
    create(A,7);

    temp=LinearSearch(first,50);
    if(temp)
        printf("\nKey is found : %d",temp->data);
    else
        printf("\nKey is Not Found");

    printf("\nMaximum value : %d",Maximum(first));

    printf("\nSum of Node : %d ",sumOfNode(first));
  
    return 0;
}
