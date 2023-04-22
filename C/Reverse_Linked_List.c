#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node*link;
};
void add_end(struct node**head,int item)
{
   struct node*temp=(struct node*)malloc(sizeof(struct node));
   temp->data=item;
   temp->link=NULL;
   struct node*t=*head;
   if(*head==NULL)
   {
      *head=temp;
   }
   else
   {
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
      printf(" %d ->",head->data);
      head=head->link;
      c++;
   }
   printf("The Number of nodes are %d ",c);
}
void rev(struct node**head)
{
   struct node *p,*n,*c;
   c=*head;
   p=NULL;
   while(c!=NULL)
   {
      n=p;
      p=c;
      c=c->link;
      p->link=n;
   }
   *head=p;
}
int main()
{
   struct node*head=NULL;
   int opt,n,item;
   printf("Enter the Number of Iterartions to be Done ! : \n");
   scanf("%d",&n);
   while(n>0)
   {
      printf("Choose your option\n1)Insert\n2)Reverse\n3)Display\n");
      scanf("%d",&opt);
      switch(opt)
      {
         case 1:
         printf("Enter the element to be Inserted : \n");
         scanf("%d",&item);
         add_end(&head,item);
         break;
         case 2:
         printf("Reversing ...");
         rev(&head);
         break;
         case 3:
         printf("The List is : \n");
         display(head);
         break;
      }
   }
   return 0;
}
