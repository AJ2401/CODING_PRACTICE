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
   temp->link=temp;
}
else{
   struct node*t=*head;
   while(t->link!=*head)
   {
      t=t->link;
   }
   t->link=temp;
   temp->link=*head;
}
}
void add_beg(struct node**head,int item)
{
   struct node*t=*head;
   struct node*temp=(struct node*)malloc(sizeof(struct node));
   temp->data=item;
   temp->link=*head;
   while(t->link!=*head)
   {
      t=t->link;
   }
   t->link=temp;
   *head=temp;
}
int del(struct node*head,int pos)
{
   int n=1;
   struct node*t=head;
   while(n<pos)
   {
      t=t->link;
      n++;
   }
   struct node*temp;
   temp=t->link;
    t->link=t->link->link;
   int item=temp->data;
   free(temp);
   return(item);
}
void display(struct node*head)
{
   int c=1;
   struct node*t=head;
   while(t->link!=head)
   {
      printf("%d -> ",t->data);
      t=t->link;
      c++;
   }
   printf("%d -> ",t->data);
   printf("\n Number of nodes are : %d\n",c);
}
void main()
{
   struct node*head=NULL;
   int opt,pos,ele,n=1;
   while(n>0)
   {
      printf("Choose your option : \n1)Add Element \n2)Add Element at Begining \n3)Delete a Node \n4)Display\n");
      scanf("%d",&opt);
      switch(opt)
      {
         case 1:
         printf("Enter element to be Added : \n");
         scanf("%d",&ele);
         append(&head,ele);
         break;

         case 2:
         printf("Enter the Element to be Added in the Begining : \n");
         scanf("%d",&ele);
         add_beg(&head,ele);
         break;
         
         case 3:
         printf("Enter the Position to be Delete : \n");
         scanf("%d",&pos);
         int d=del(head,pos);
         printf("%d Element is being Deleted ! \n",d);
         break;

         case 4:
         printf("The Circular Linked List is : \n");
         display(head);
         break;

         default:
         break;
      }
   }

}