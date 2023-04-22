#include<stdio.h>
#include<stdlib.h>
struct stack
{
    char data;
    struct stack *link;
};
void push(struct stack**,char item);
char pop(struct stack**);
void display(struct stack**);
int main()
{
    struct stack *S=NULL;
    char c,ch;
    int n;
    do
    {
        printf("\n Enter any option \n1)Push\n2)Pop\n3)Display\n4)Exit\n");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
                printf("\n Enter any character :\n");
                scanf("%s",&c);
                push(&S,c);
                break;
            case 2:
                ch=pop(&S);
                printf("%c is poped ",ch);
                break;
            case 3:
                display(&S);
                break;
        }
    }
    while(n!=0);
}
void push(struct stack **top,char item)
{
    struct stack *temp;
    temp=(struct stack*)malloc(sizeof(struct stack));
    if(temp==NULL)
    {
        printf("\n The Stack is Full ");
    }
    else
    {
        temp->data=item;
        temp->link=*top;
        *top=temp;
    }
}
char pop(struct stack **top)
{
    struct stack* temp;
    temp=*top;
    int item;
    if(*top==NULL)
    {
        printf("\n The Stack is Empty ");
        return(NULL);
    }
    else
    {
        item=temp->data;
        *top=(*top)->link;
        free(temp);
        return(item);
    }
}
void display(struct stack **top)
{
    struct stack *temp=*top;
    while(temp!=NULL)
    {
        printf("%c",temp->data);
        temp=temp->link;
    }
}
