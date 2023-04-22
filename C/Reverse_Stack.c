#include<stdio.h>
#include<stdlib.h>
int*stack;
int max;
int top=-1;
void push(int item)
{
   if(top==max)
   {
      printf("OVERFLOW CONDITION !! \nCannot Insert any element .\n");
   }
   else
   {
      top++;
      stack[top]=item;
   }
}
int pop()
{
   if(top==-1)
   {
      printf("UNDERFLOW CONDITION !!\nCannot POP any Element .\n");
      return NULL;
   }
   else
   {
      int ele=stack[top];
      top--;
      //printf("%d Element is POPED !! \n",ele);
      return ele;
   }
}
void display()
{
   for(int i=max-1;i>=0;i--)
   {
      printf("|\t%d\t|\n",stack[i]);
   }
}
void reverse()
{
   int*stack1=calloc(max,sizeof(int));
   int top1=-1;
   while(top1!=max-1){
      top1++;
      stack1[top1]=pop();
   }
   for(int i=max-1;i>=0;i--)
   {
      printf("|\t%d\t|\n",stack1[i]);
   }
   free(stack1);
}
void main()
{
   int ele;
   printf("Enter the Array Length : ");
   scanf("%d",&max); 
   stack=calloc(max,sizeof(int));
for(int i=0;i<max;i++)
{
   printf("Enter Element %d : ",i+1);
   scanf("%d",&ele);
   push(ele);
}
printf("The Stack is : \n");
display();
printf("The Reverse Stack is : \n");
reverse();
free(stack);
}
