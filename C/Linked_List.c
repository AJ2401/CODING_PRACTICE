#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node *link;
};
void append(struct node **head,int item)
{
   if(*head==NULL)
   {
      struct node* temp=(struct node*)malloc(sizeof(struct node));
      temp->data=item;
      temp->link=NULL;
      *head=temp;
   }
   if((*head)->link==NULL)
   {
      struct node* temp=(struct node*)malloc(sizeof(struct node));
      temp->data=item;
      temp->link=NULL;
      (*head)->link=temp;
   }
   else
   {
      struct node* temp=(struct node*)malloc(sizeof(struct node));
      struct node* t=*head;
      while(t->link!=NULL)
      {
         t=t->link;
      }
      temp->data=item;
      temp->link=NULL;
   }
}
void  del(struct node **head)
{
    if(*head==NULL)
   {
      printf("The List Dosen't Exists !");
   }
   if((*head)->link==NULL)
   {
    free(*head);
    *head=NULL;
   }
   else
   {
      struct node* temp=*head;
      struct node* t=*head;
      while(t->link!=NULL)
      {
         t=t->link;
      }
      t->link=NULL;
      free(temp);
      temp=NULL;
   }

}
void display(struct node *head)
{
   struct node *temp=head;
   while(temp->link!=NULL)
   {
      printf(" %d -> ",temp->data);
      temp=temp->link;
   }
}
int main()
{
   struct node*head=NULL;
   int opt;
   int ele;
   int a=10;
   while(a>0){
   printf("Enter your Choice \n1) Add \n2)Delete\n3)Display");
   scanf("%d",&opt);
   switch(opt)
   {
      case 1:
      printf("Enter any Element : ");
      scanf("%d",&ele);
      append(&head,ele);
      break;
      case 2:
      del(&head);
      printf(" Element is being Deleted ");
      break;
      case 3:
      display(head);
      break;
   }
   }
   return 0; 
}