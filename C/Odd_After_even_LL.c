#include<stdio.h>
#include<stdlib.h>
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
      printf("%d -> ",head->data);
      head=head->link;
      c++;
   }
   printf("\n%d Nodes are there . \n",c);
}
void Even_A_Odd(struct node**head)
{
   struct node*e=*head;
   struct node*o=(*head)->link;
   struct node*e_s=o;
   while(e->link!=NULL && o->link!=NULL)
   {
      e->link=o->link;
      e=e->link;
      o->link=e->link;
      o=o->link;
   }
   if(e->link!=NULL)
   {
      o->link=NULL;
   }
      e->link=e_s;
}
void Odd_A_Even(struct node**head)
{
   struct node*o=*head;
   struct node*e=(*head)->link;
   struct node*o_s=e;
   while(e->link!=NULL && o->link!=NULL)
   {
      o->link=e->link;
      o=o->link;
      e->link=o->link;
      e=e->link;
   }
   if(o->link==NULL)
   {
      e->link=NULL;
   }
   o->link=o_s;
}
int main()
{
   struct node*head=NULL;
   int opt,ele,n=1;
   while(n>0)
   {
      printf("Choose any Option : \n1)Add Element \n2)Display \n3)Even After Odd \n4)Odd After Even \n");
      scanf("%d",&opt);
      switch (opt)
      {
      case 1:
      printf("Enter the Element : \n");
      scanf("%d",&ele);
      append(&head,ele);
         break;
      case 2:
      printf("The Linked List is : \n");
      display(head);
      break;
      case 3:
      Even_A_Odd(&head);
      break;
      case 4:
      Odd_A_Even(&head);
      break;
      default:
         break;
      }
   }
   return 0;
}