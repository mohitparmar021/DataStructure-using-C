#include <stdio.h>
#include <stdlib.h>

int top=-1;
char arr[100];
int size=100;
void push(char x)
{
    if(top==size-1)
        printf("stack Overflow");
    else
    {
         top++;
         arr[top]=x;
    }
}

void pop()
{
    if(top==-1)
        printf("stack is Underflow");
    else
        top--;
}
char stackTop()
{
    if(top==-1)
        return -1;
    else
        return arr[top];
}

int isBalance(char *exp)
{
    int i;
    for(i=0; exp[i]!='\0'; i++)
    {
        if(exp[i]=='('||exp[i]=='{'||exp[i]=='[')
            push(exp[i]);
        else if(exp[i]==')'|| exp[i]=='}' || exp[i]==']')
        {
            if(top==-1)
            {
            return 0;
            }

            if (stackTop() == '(' && exp[i] == ')')
                pop();
            else if (stackTop() == '{' && exp[i] == '}')
                pop();
             else if (stackTop() == '[' && exp[i] == ']')
                pop();
            else
                  return 0;
        }
    }
    if(top==-1)
    {
        return 1;
    }
    else
        return 0;
}

int main()
{

    char emp[]="{[[(a+b)]+[(a+b)]]}";
     int x=isBalance(emp);
     if(x>0)
     {
          printf("match");
     }
     else
     {
         printf("Not Match");
     }
    return 0;
}
