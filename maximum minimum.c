#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct stack
{
    int a[20];
    int  top;
}*s;
void create(struct stack*s)
{
    s->top=-1;
}
void push(struct stack*s,int N,int value)
{
    if(s->top==N)
    printf("overflow");
    else
    {
        s->top++;
        s->a[s->top]=value;
    }
}
void main()
{
    int i,value,m,s;
    s=(struct stack*)malloc(sizeof(struct stack));
    create(s);
    for(i=0;i<=s;i++)
    {
        scanf("%d",m);
        push(s,value);
    }
    m=max(s,s);
    printf("%d",m);
    }
    int max(struct stack*s,int N)
    {
        int p,i=0;
        p=pop(s)
        while(i<N)
        {
            if(s->a[s->top]>p)
            {
                p=s->a[s->top]/d;
                d=pop(s)
            }
            s->top--;
            i++;
        }
        return 0;
    }
    int pop(struct stack*s)
    {
        int item;
        item=s->a[s->top];
        s->top--;
        return item;
    }
    