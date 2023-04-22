#include<stdio.h>
#include<stdlib.h>
#define max 50
struct stack
{
   int num;
   char arr[max];
   int top;
};
int isFull(struct stack*S)
{
   if(S->top==S->num)
   {
      return 1;
   }
   else
   {
      return 0;
   }
}
int isEmpty(struct stack*S)
{
   if(S->top==-1)
   {
      return 1;
   }
   else
   {
      return 0;
   }
}
void intial(struct stack*S)
{
   S->top=-1;
}
void push(struct stack*S,char ele)
{
   if(isFull(&S)==1)
   {
      printf("Stack is Full\n");
   }
   else
   {
      S->top++;
      S->arr[S->top]=ele;
   }
}
char pop(struct stack*S)
{
   if(isEmpty(&S)==1)
   {
      printf("Stack is Empty !\n");
      return;
   }
   else
   {
      char item=S->arr[S->top];
      S->top--;
      return(item);
   }
}
void display(struct stack*S)
{
   while(S->top!=-1)
   {
      printf("%c |\n",S->arr[S->top]);
      S->top--;
   }
}
void main()
{
   struct stack*S;
   int n,opt;
   char ele[n];
   intial(&S);
   printf("Enter the Number of Iterations to be Done : \n");
   scanf("%d",&n);
   S->num=n;
   while(n>0)
   {
      printf("Choose your Option :\n1)PUSH \n2)POP\n3)DISPLAY\n4)Resize the Array : \n5)EXIT\n");
      scanf("%d",&opt);
      switch (opt)
      {
      case 1:
      printf("Enter the Element : \n");
      scanf("%c",&ele);
      push(&S,ele);
         break;
      case 2:
      char item;
      item=pop(&S);
      if(item==NULL)
      {
         printf("The Stack is Empty !\n");
      }
      else{
      printf("%c Element is POPED !! \n",item);
      }
         break;
      case 3:
      printf("The Stack is : \n");
      display(&S);
         break;
      case 4:
      printf("Enter the  New Value  ? \n");
      scanf("%d",&n);
         break;
      case 5:
      n=0;
        break;
      default:
         break;
      }
   }
}