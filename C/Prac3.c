#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;
};
void add_end(struct node* head,int data)
{
   struct node *ptr,*temp;
   temp= malloc(sizeof(struct node));
   ptr=head;
   while(ptr->link!=NULL)
   {
       ptr=ptr->link;
   }
   temp->data=data;
   temp->link=NULL;
   ptr->link=temp;
}
void display(struct node* head)
{
    int count=0;
    struct node* temp=head;
    if(temp==NULL)
    {
     printf("The Linked List is Empty ");
    }
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        count++;
        temp=temp->link;
    }
    printf("\nNumber of nodes are : %d\t",count);
}
int main()
{
    struct node* head=malloc(sizeof(struct node));
    head->data=145;
    head->link=NULL;

    struct node* current=malloc(sizeof(struct node));
    current->data=175;
    current->link=NULL;
    head->link=current;

    struct node* current1=malloc(sizeof(struct node));
    current1->data=45;
    current1->link=NULL;
    current->link=current1;

    add_end(head,781);

    display(head);
return 0;
}
