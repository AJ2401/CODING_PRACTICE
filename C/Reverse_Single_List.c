#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node*link;
};
struct node*add_beg(struct node*head,int item)
{
   struct node*temp=malloc(sizeof(struct node));
   temp->data=item;
   temp->link=head;
   head=temp;
   return(head);
}
struct node*reverse(struct node*head)
{
   struct node*c=head;
   struct node*n;
   struct node*p=NULL;
   while(c!=NULL)
   {
       n=p;
       p=c;
       c=c->link;
       p->link=n;
   }
   head=p;
   return(head);
}
void display(struct node*head)
{
   int c=0;
   struct node* t=head;
   while(t!=NULL)
   {
      printf("%d -> ",t->data);
      t=t->link;
      c++;
   }
   printf("\nThe Number of nodes are %d\n",c);
}
int main()
{
   struct node*head=NULL;
   int n;
   printf("Enter the Number of nodes : ");
   scanf("%d",&n);
   int num[n];
   printf("\nEnter the Elements for the Nodes\n");
   for(int i=0;i<n;i++)
   {
       printf(" Node %d data : ",i+1);
      scanf("%d",&num[i]);
      head=add_beg(head,num[i]);
   }
   printf("The Linked List is : ");
   display(head);
   head=reverse(head);
   printf("The Reversed Linked list is : ");
   display(head);
}
