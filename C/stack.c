//Linked List Using Stack(vice-versa)
#include<stdio.h>
#include<stdlib.h>
struct node
{
   struct node*link;
   int data;
};
void push(struct node**top,int item)
{
   struct node*temp=(struct node*)malloc(sizeof(struct node));
   temp->data=item;
   temp->link=*top;
   *top=temp;
}
void pop(struct node**top)
{
   struct node*temp;
   temp=*top;
   *top=temp->link;
   int item=temp->data;
   printf("%d Element is POPED !! ",item);
   free(temp);
}
void display(struct node*top)
{
   while(top!=NULL)
   {
      printf(" %d -> ",top->data);
      top=top->link;
   }
}
void main()
{
   struct node*top=NULL;
   int item,opt,n=1;
   while(n>0)
   {
      printf("Choose your option \n1)Push \n2)POP\n3)Display \n");
      scanf("%d",&opt);
      switch(opt)
      {
         case 1:
         printf("Enter any Element :\n");
         scanf("%d",&item);
         push(&top,item);
         break;
         case 2:
         pop(&top);
         break;
         case 3:
         printf("The Stack is : \n");
         display(top);
         break;
         default:
         break;
      }
   }
}