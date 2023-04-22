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
   temp->next=NULL;
   temp->data=item;
   temp->pre=NULL;
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
   }
}
void display(struct node*head)
{
   int c=0;
   while(head!=NULL)
   {
      printf("%d -> ",head->data);
      c++;
      head=head->next;
   }
   printf("\n The Number  of Nodes are :%d\n",c);
}
struct node*merge(struct node**head1,struct node**head2)
{
   struct node*t1=*head1;
   struct node*t2=*head2;
   struct node*temp=(struct node*)malloc(sizeof(struct node));
   struct node*t=temp;
   while(t1!=NULL && t2!=NULL)
   {
      if(t1->data<t2->data)
      {
         t->next=t1;
         t1=t1->next;
      }
      else
      {
         t->next=t2;
         t2=t2->next;
      }
      t=t->next;
   }
   return(temp->next);
}
int main()
{
   struct node*head=NULL;
   struct node*head1=NULL;
   struct node*head2=NULL;
   int n=1,opt,o,ele;
   while(n>0)
   {
      printf("Choose the option\n1)Add Element \n2)Display \n3)Merge\n");
      scanf("%d",&opt);
      switch (opt)
      {
      case 1:
      printf("Choose any List \n1)List 1\nOR\n2)List 2\n");
      scanf("%d",&o);
      switch (o)
      {
      case 1:
      printf("Enter your Element : \n");
      scanf("%d",&ele);
      append(&head1,ele);
         break;
      case 2:
      printf("Enter your Element : \n");
      scanf("%d",&ele);
      append(&head2,ele);
         break;
      }
       break;
      case 2:
       printf("Choose any List \n1)List 1\nOR\n2)List 2\n");
      scanf("%d",&o);
      switch (o)
      {
      case 1:
      printf("The List 1 is  : \n");
      display(head1);
         break;
      case 2:
      printf("The List 2 is : \n");
      display(head2);
         break;
      }
       break;
       case 3:
       head=merge(&head1,&head2);
       printf("The Merged Sorted Linked List is  :\n");
       display(head);

       break;
      default:
         break;
      }
   }
   return 0;
}