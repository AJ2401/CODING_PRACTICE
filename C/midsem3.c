#include<stdio.h>
#include<stdlib.h>
#define max 8
struct stack
{
    int arr[max];
    int top;
};
void intail(struct stack*);
void push(struct stack*,int item);
int pop(struct stack*);
void display(struct stack*);
int main()
{
    struct stack* s;
    intial(&s);
    int n,num,n1,data;
    printf("Enter any number for array :");
    sacnf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter any number \n");
        scanf("%d",&num);
        push(&s,num);
    }
    printf("The Stack is :");
    display(&s);
    printf("Enter any number to how much time you have to pop ");
    scanf("%d",&n1);
    for(int i=0; i<n1; i++)
    {
        data=pop(&s);
        printf("%d Element is poped out ",data);
    }
    printf("The Stack after poping :");
    display(&s);
}
void intial(struct stack* s)
{
    s->top=-1;
}
void push(struct stack* s,int item)
{
    if(s->top>=max-1)
    {
        printf("The Stack is Full ");
    }
    else
    {
        s->top++;
        s->arr[s->top]=item;
    }
}
int pop(struct stack* s)
{
    if(s->top>=-1)
    {
        printf("The Stack is Empty ");
    }
    else
    {
        int data;
        data=s->arr[s->top];
        s->top--;
        return(data);
    }
}
void display(struct stack* s)
{
    while(s->top!=max-1)
    {
        printf("%d",s->arr[s->top]);
        s->top++;
    }
}
