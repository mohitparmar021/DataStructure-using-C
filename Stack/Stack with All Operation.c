#include <stdio.h>
#include <stdlib.h>

struct Stack
{
   int size;
   int top;
   int *S;
};

void creatStack(struct Stack *st)
{
   printf("Enter Size Of Stack");
   scanf("%d",&st->size);
   st->top=-1;
   st->S=(int *)malloc(st->size*sizeof(int));
}

void Display(struct Stack st)
{
    int i;
    for(i=st.top; i>=0; i--)
    {
        printf("\n%d ",st.S[i]);
    }
}

void push(struct Stack *st,int x)
{
    if(st->top==st->size-1)
        printf("stack Overflow");
    else
    {
        st->top++;
        st->S[st->top]=x;
    }
}

int pop(struct Stack *st)
{
    int x=-1;
    if(st->top==-1)
        printf("stack is Underflow");
    else
        x=st->S[st->top--];

    return x;
}

int peek(struct Stack st,int pos)
{
    int x=-1;
    if(st.top-pos+1<0)
        printf("\n\nInvalid Position");
    else
        x=st.S[st.top-pos+1];
    return x;
}

int stackTop(struct Stack st)
{
    if(st.top==-1)
        return -1;
    else
        return st.S[st.top];
}

int isEmpty(struct Stack st)
{
    if(st.top==-1)
        return 1;
    else
        return 0;
}

int isFull(struct Stack st)
{
   if(st.top==st.size-1)
        return 1;
    else
        return 0;

}

int main()
{
   struct Stack st;

    creatStack(&st);

    push(&st,10);
    push(&st,20);
    push(&st,30);
    push(&st,40);
    push(&st,50);

    Display(st);

    printf("\n\n%d is Peek\n\n",peek(st,3));
    printf("\n\n%d is stackTop\n\n",stackTop(st));
    printf("\n\n%d is IsEmpty\n\n",isEmpty(st));
    printf("\n\n%d is IsFull\n\n",isFull(st));

    printf("\n\n%d is Poped",pop(&st));
    printf("\n%d is Poped",pop(&st));

    return 0;
}
