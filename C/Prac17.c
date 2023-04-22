//Creating a Linked List
#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node* next;
    struct node* pre;
    int data;
};
void display(struct node* head)
{
    struct node* temp=head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}
struct node* add_empty(struct node* ptr,int data)
{
    struct node* tempo=malloc(sizeof(struct node));
    tempo->next=NULL;
    tempo->pre=NULL;
    tempo->data=data;
    ptr=tempo;
    return(ptr);
};
struct node* add(struct node* head,int data)
{
    struct node* temp=malloc(sizeof(struct node));
    temp->next=NULL;
    temp->pre=NULL;
    temp->data=data;
    head->next=temp;
    temp->pre=head;
    return(head);
};
int main()
{
    struct node* head=NULL;
    struct node* ptr;
    head=add_empty(head,589);
    display(head);
    head=add(head,487);
    display(head);
    head=add(head,87);
    display(head);
    head=add(head,12);
    display(head);
    head=add(head,10);
    display(head);
    return 0;
}
