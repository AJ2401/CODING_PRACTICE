#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node*link;
};
void push(struct node**top,int item)
{
   struct node*temp=(struct node*)malloc(sizeof(struct node));
   temp->data=item;
   temp->link=NULL;
   if(*top==NULL)
   {
       printf("Stack  Overflow !! ");
       *top=temp;
   }
   else
   {
      struct node*t=*top;
      while(t->link!=NULL)
      {
         t=t->link;
      }
      t->link=temp;
   }
}
void pop(struct node**top)
{
   struct node*t=*top;int d;
   if(*top==NULL)
   {
      printf("Stack Underflow ");
   }
   else
   {
    while(t->link->link!=NULL)
    {
       t=t->link;
    }
    d=t->data;
    t->link=NULL;
   }
   printf("%d Element Poped",d);
   
}
void display(struct node*top)
{
   int c=0;
   while (top!=NULL)
   {
      printf(" %d -> ",top->data);
      top=top->link;
      c++;
   }
   printf("\nNumber of Nodes are %d \n",c);
}
int main()
{
   struct node*top=NULL;
   int n,ele,opt;
   printf("Enter the Number of Iterations to be done : \n");
   scanf("%d",&n);
   while(n>0)
   {
      printf("Choose your Option : \n1)Push an Element \n2)Pop an Element \n3)Display the Stack \n");
      scanf("%d",&opt);
      switch (opt)
      {
      case 1:
      printf("Enter any Element to be Inserted in the Stcak : \n");
      scanf("%d",&ele);
      push(&top,ele);
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
   return 0;
}