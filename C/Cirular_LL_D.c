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
      temp->pre=t->next;
      t->next->next=temp;
      temp->next=*head;
   }
}
void display(struct node*head)
{
   int c=1;
   struct node*t=head;
   while(t->next!=head)
   {
      printf("%d -> ",t->data);
      c++;
      t=t->next;
   }
   printf("%d -> ",t->data);
   printf("\n Number of nodes are %d \n",c);
}
int del(struct node**head,int pos)
{
return 0;
}
void add_beg(struct node**head,int item)
{

}
void main()
{
   struct node*head=NULL;
   int pos,opt,ele,n=1;
   while(n>0)
   {
      printf("Choose your Option :\n1)Add Element \n2)Add Beginging \n3)Display \n4)Delete a Node \n");
      scanf("%d",&opt);
      switch(opt)
      {
         case 1:
         printf("Enter an Element :\n");
         scanf("%d",&ele);
         append(&head,ele);
         break;
         case 2:
         printf("Enter the Element to be added in the beginging : \n");
         scanf("%d",&ele);
         add_beg(&head,ele);
         break;
         case 3:
         printf("The Linked List is : \n");
         display(head);
         break;
         case 4:
         printf("Enter the Position to be Deleted : \n");
         scanf("%d",&pos);
        int d=del(&head,pos);
        printf("%d element is Deleted ! \n");
        break;
        default:
        break;
      }
   }
   return 0;
}