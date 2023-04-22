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
    temp->next=head;
    head->pre=temp;
    head=temp;
   // head->next=temp;
    //temp->pre=head;
    return(head);
};
struct node* Creating(struct node* head)
{
  int data,n,i;
  printf("\n Enter the Number of Nodes to be Created: \n");
  scanf("%d",&n);
  if(n==0)
  {
      return(head);
  }
    printf("Enter the Data for the First Node : ");
    scanf("%d",&data);
    head=add_empty(head,data);
    for(i=1;i<n;i++)
    {
        printf("Enter the Data for Node %d",i+1);
        scanf("%d",&data);
        head=add(head,data);
    }
    return(head);
};
int main()
{
    struct node* head=NULL;
    struct node* ptr;
    head=Creating(head);
    display(head);
    return 0;
}

