#include<stdlib.h>
#include<stdio.h>
#define max 12
struct stack
{
   int data[max];
   int top;
};
void intial(struct stack*s)
{
   s->top=-1;
}
void push(struct stack*s,int item)
{
   if(s->top!=max)
   {
      s->top++;
      s->data[s->top]=item;
   }
   else
   {
      printf("Stack is Full !!");
   }
}
int pop(struct stack*s)
{
   if(s->top<=-1)
   {
      printf("Stack is Empty !! ");
      return 0;
   }
   else
   {
      int ele=s->data[s->top];
      s->top--;
      return (ele);
   }
}
void display(struct stack*s)
{
   int c=0;
   while(s->top !=-1)
   {
      printf("%d |\n * ",s->arr[s->top]);
      s->top--;
      printf("\n");
      c++;
   }
   printf("Number of Elements are %d ",c);
}
void main()
{
   struct stack*s;
   intial(&s);
   int ele,opt,n=1;
   while(n>0)
   {
      printf("Choose your Option : \n1)Push \n2)Pop\n3)Display \n");
      scanf("%d",&opt);
      switch (opt)
      {
      case 1:
      printf("Enter the Element to be Entered ? : \n");
      scanf("%d",&ele);
      push(&s,ele);
         break;
      case 2:
      int item=pop(&s);
      printf("%d Element is Poped ! \n",item);
         break;
      case 3:
      printf("The Stack is : \n");
      display(&s);
         break;
      default:
         break;
      }
   }

}