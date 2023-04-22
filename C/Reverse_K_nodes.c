#include<stdlib.h>
#include<stdio.h>
struct node
{
   int data;
   struct node*link;
};
void append(struct node**head,int item)
{
   struct node*temp=(struct node*)malloc(sizeof(struct node));
   temp->data=item;
   temp->link=NULL;
   if(*head==NULL)
   {
      *head=temp;
   }
   else
   {
      struct node*t=*head;
      while(t->link!=NULL)
      {
         t=t->link;
      }
      t->link=temp;
   }
}
void display(struct node*head)
{
   int c=0;
   while(head!=NULL)
   {
      printf("%d  ->  ",head->data);
      head=head->link;
      c++;
   }
   printf("The Number of nodes are  : %d\n",c);
}
struct node* reverse(struct node**head,int k)
{
   struct node*pre=NULL;
   struct node*curr=*head;
   struct node*next;
   int c=0;
   while(c<k && curr!=NULL)
   {
      next=curr->link;
      curr->link=pre;
      pre=curr;
      curr=next;
      c++;
   }
   if(next!=NULL)
   {
      (*head)->link=reverse(&next,k);
   }
   return(pre);
}
int main()
{
   int k,opt,ele,n=10;
   struct node*head=NULL;
   while(n>0){
      printf("Choose your Option \n1)Add Element \n2)Display \n3)Reverse \n");
      scanf("%d",&opt);
      switch (opt)
      {
      case 1:
      printf("Enter the Element : \n");
      scanf("%d",&ele);
      append(&head,ele);
         break;
         case 2:
         display(head);
      break;
      case 3:
      printf("Enter the Value of K : \n");
      scanf("%d",&k);
      head=reverse(&head,k);
      break;
      default:
         break;
      }
   }
   return 0;
}