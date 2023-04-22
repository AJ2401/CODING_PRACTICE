#include<stdlib.h>
#include<stdio.h>
struct node
{
    struct node* pre;
    struct node* next;
    int data;
};
struct node*  add_Empty(struct node* head,int data)
{
 struct node* temp=malloc(sizeof(struct node));
 temp->data=data;
 temp->next=NULL;
 temp->pre=NULL;
 head=temp;
 return(head);
};
struct node* add_beg(struct node* head,int data)
{
    struct node* temp,*tempo;
    temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    temp->pre=NULL;
    tempo=head;
    while(tempo->next!=NULL)
    {
     tempo=tempo->next;
    }
    tempo->next=temp;
    temp->pre=tempo;
    return(head);
};
struct node* Create_List(struct node* ptr)
{
    int n,data;
    printf("Enter the Number of Nodes to be Created\n");
    scanf("%d",&n);
    if(n==0)
    {
        return(ptr);
    }
    printf("Enter the Data for First Node:\n");
    scanf("%d",&data);
    ptr=add_Empty(ptr,data);
    for(int i=1;i<n;i++)
    {
     printf("Enter the data for the %d",i+1);
     scanf("%d",&data);
     ptr=add_beg(ptr,data);
    }
    return(ptr);
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
int main()
{
    struct node* head=malloc(sizeof(struct node));
    head=Create_List(head);
    display(head);
    return 0;
}
