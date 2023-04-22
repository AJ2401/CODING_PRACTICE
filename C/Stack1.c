#include<stdio.h>
#include<stdlib.h>
int*Stack;
int top=-1;
int n;
void push(int item)
{
   if(top==n)
   {
      printf("Overflow Condition\n Cannot insert Item ! \n");
   }
   else
   {
      top++;
     Stack[top]=item;
   }
}
void display()
{
   for(int i=n;i>0;i--)
   {
      printf("|\t%d\t|\n",Stack[i]);
   }
}
int pop()
{
   int ele;
   if(top<=-1)
   {
      printf("UNDERFLOW CONDITION\nCannot Pop the Element !! \n");
      return -1;
   }
   else
   {
      ele=Stack[top];
      top--;
      return ele;
   }
}
void peek()
{
   printf("Peek Element is : %d",Stack[top]);
}
void main()
{
   int ele,len,item,opt,num,n1=1;
   printf("Enter the Array Length :\n");
   scanf("%d",&len);
   Stack=calloc(len,sizeof(int));
   n=len;
  // printf("Enter the Number of iterations : \n");
  // scanf("%d",&num);
   while(num>0)
   {
      printf("Choose your option : \n1)Push\n2)Display\n3)Pop\n4)Peek Element\n5)Resize the Array \n");
      scanf("%d",&opt);
      switch (opt)
      {
      case 1:
      printf("Enter the Element  :\n");
      scanf("%d",&item);
      push(item);
         break;
      case 2:
      printf("Stack is : \n");
      display();
      break;
      case 3:
      ele=pop();
      if(ele!=NULL)
      {
         printf("%d Element is POPED ! ! \n",ele);
      }
      break;
      case 4:
      peek();
      break;
      case 5:
      printf("Enter the Array Length :\n");
      scanf("%d",&n1);
      Stack=calloc((len+n1),sizeof(int));
      break;
      default:
         break;
      }
   }
}
