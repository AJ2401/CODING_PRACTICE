#include<stdio.h>
#include<stdlib.h>
//include<stdbool.h>
#define max 16
struct stack
{
    int arr[max];
    int top;
};
void intial(struct stack*);
void push(struct stack*,int data);
int pop(struct stack*);
void display(struct stack*);
//bool isfull(struct stack*);
//bool isempty(struct stack*);
int main()
{
    struct stack s;
    intial(&s);
    int num,a[max];
    printf("Enter any Number : ");
    scanf("%d",&num);
    while(num>0)
    {
        push(&s,num%2);
        num=num/2;
    }
    display(&s);
}
void intial(struct stack *S)
{
    S->top=-1;
}
void push(struct stack *S,int data)
{
    if(S->top>=max-1)
    {
        printf("The Stack is Full");
    }
    else
    {
        (S->top)++;
        S->arr[S->top]=data;
    }
}
void display(struct stack *S)
{
    for(int i=S->top; i>=0; i--)
    {
        printf("%d",S->arr[i]);
    }
}
/*bool isfull(struct stack *S)
{
    if(S->top>=max-1)
    {
        return(false);
    }
    else
    {
        return(true);
    }
}
*/
