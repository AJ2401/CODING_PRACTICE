#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node*pre,*next;
};
void append(struct node**head,int item)
{
   struct node*temp=(struct node*)malloc(sizeof(struct node));
   temp->data=item;
   temp->pre=NULL;
   temp->next=NULL;
   if(*head==NULL)
   {
      *head=temp;
   }
   else
   {
      struct node*t=*head;
      while(t->next!=NULL)
      {
         t=t->next;
      }
      t->next=temp;
      temp->pre=t;
   }
}
void display(struct node*head)
{
   int c=0;
   while(head!=NULL)
   {
      printf(" %d -> ",head->data);
      head=head->next;
      c++;
   }
   printf("Number of nodes are : %d \n",c);
}
void add_beg(struct node**head,int item)
{
   struct node*temp=(struct node*)malloc(sizeof(struct node*));
   temp->data=item;
   temp->next=NULL;
   temp->pre=NULL;
   (*head)->pre=temp;
   temp->next=*head;
   *head=temp;
}
int del(struct node**head,int pos)
{
   struct node*t=*head;
   int count=1;
   while(t!=NULL && t->next!=NULL && count!=0)
   {
      t=t->next;
      count++;
      if(count==pos)
      {
         int ele=t->data;
         t->pre->next=t->next;
         t->next->pre=t->pre;
         free(t);
         return(ele);
      }
   }
}
int main()
{
   struct node*head=NULL;
   int ele,opt,n=1,pos;
   while(n>0)
   {
      printf("\nChoose your option \n1)Add Element \n2)Add Element at Begining \n3)Display\n4)Delete A node\n");
      scanf("%d",&opt);
      switch (opt)
      {
      case 1:
      printf("Enter the Element : \n");
      scanf("%d",&ele);
      append(&head,ele);
         break;
      case 2:
      printf("Enter the Element (At Begining ) : \n");
      scanf("%d",&ele);
      add_beg(&head,ele);
      break;
      case 3:
      printf("The Doubly  Linked List is :  \n");
      display(head);
      break;
      case 4:
      printf("Enter any position to be Deleted \n");
      scanf("%d",&pos);
      int d=del(&head,pos);
      printf("%d is Deleted ! ",d);
      break;
      default:
         break;
      }
   }
   return 0;
}