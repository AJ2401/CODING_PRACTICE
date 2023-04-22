//Inserting Node at the Begining
#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node* next;
    struct node* pre;
    int data;
};
void display(struct node* ptr)
{
    struct node* temp=ptr;
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
struct node* add_beg(struct node* head,int data)
{
    struct node* temp=malloc(sizeof(struct node));
    temp->next=NULL;
    temp->pre=NULL;
    temp->data=data;
    temp->next=head;
    head->pre=temp;
    head=temp;
    return(head);
};
int main()
{
    struct node* head=NULL;
    struct node* ptr;
    head=add_empty(head,589);
    display(head);
    head=add_beg(head,487);
    head=add_beg(head,87);
    head=add_beg(head,12);
    head=add_beg(head,10);
    printf("\nAfter adding : \n");
    display(head);
    return 0;
}
