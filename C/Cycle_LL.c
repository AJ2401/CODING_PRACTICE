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
   printf("%d",c);
}
void cycle(struct node**head,int pos)
{
   struct node*t=*head;
   struct node*s;
   int count=1;
   while(t->link!=NULL)
   {
      if(count==pos)
      {
         s=t;
      }
      
         t=t->link;
         count++;
   }
   t->link=s;
}
 void check(struct node**head)
{
   struct node*f=*head;
   struct node*s=*head;
   int c=0;
   while(f->link!=NULL && f!=NULL)
   {
      s=s->link;
      f=f->link->link;
      if(s==f)
      {
         c=1;
         break;
      }
   }
   if(c==1)
   {
      printf("It dosent have a Cycle ! \n");
   }
   else if(c==0)
   {
      printf("It dosent have a Cycle ! \n");
   }
}
void remove_cycle(struct node**head)
{
   struct node*f=*head;
   struct node*s=*head;
   while(f->link!=NULL && f!=NULL)
   {
      f=f->link->link;
      s=s->link;

      if(f==s)
      {
         break;
      }
   }
   f=*head;
   while(s->link!=f->link)
   {
      s=s->link;
      f=f->link;
   }
   s->link=NULL;
}
int main()
{
   struct node*head=NULL;
   int ele,opt,pos,n=10,c;
   while(n>0)
   {
      printf("\nChoose your option \n1)ADD \n2)Display \n3)Make Cycle\n4)Detect\n5)Remove Cycle \n");
      scanf("%d",&opt);
      switch (opt)
      {
      case 1:
      printf("Enter the  Element : \n");
      scanf("%d",&ele);
      append(&head,ele);
       break;

      case 2:
      printf("The Linked List is : \n");
      display(head);
         break;

      case 3:
      printf("Enter the Position to Make up the Cycle : \n");
      scanf("%d",&pos);
      cycle(&head,pos);
       break;

      case 4:
      printf("Checking whether there is Cycle or not \n");
      check(&head);
           break;

      case 5:
      remove_cycle(&head);
      printf("Cycle Removed !! \n");
      break;
      default:
         break;
      }
   }
   return 0;
}