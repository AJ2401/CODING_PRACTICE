#include<stdio.h>
#include<stdlib.h>
struct stack
{
    char node;
    struct stack* link;
};
struct stack *head=NULL;
void display();
void push(char data);
char pop();
int main()
{
    int n;
    char c,ch;
    do
    {
        printf("Enter any option From the given Menu :\n1)Push\n2)Pop\n3)Display\n4)Exit\n");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            printf("Enter any Character to be inserted in the stack :\n");
            scanf("%s",&c);
            push(c);
            break;
        case 2:
            ch=pop();
            printf("The %c Element is poped ");
            break;
        case 3:
            printf("The Stack is :");
            display();
            break;

            /*   case default          break;*/
        }
    }
    while(n!=0);
}
void push(char data)
{
    struct stack* n;
    n=(struct stack*)malloc(sizeof(struct stack));
    if(n==NULL)
    {
        printf("Stack is Full ");
    }
    else
    {
        n->node=data;
        n->link=head;
        head=n;
    }
}
char pop()
{
    if(head==NULL)
    {
        printf("Stack is Empty ");
    }
    else
    {
        struct stack *temp;
        temp=head;
        head=head->link;
        free(temp);
    }

}
void display()
{
    struct stack *temp=head;
    while(head!=NULL)
    {
        printf("%c",head->node);
        head=head->link;
    }

}
