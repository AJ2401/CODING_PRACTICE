#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int top=-1;
int *stack;
int max;
void push(int item)
{
   if(top==max)
   {
      return;
   }
   else
   {
      top++;
      stack[top]=item;
   }
}
void pop()
{
   if(top==-1)
   {
      return;
   }
   else
   {
      int ele=stack[top];
      top--;
   }
}
void eval(char arr[max])
{
   int result=0;
   for(int i=0;i<=max-1;i++)
   {
      if(arr[i]>='0' &&  arr[i]<='9')
      {
         push(arr[i]-'0');
      }
      else
      {
         int op1=stack[top];
         pop();
         int op2=stack[top];
         pop();
         switch(arr[i])
         {
            case '+':
            result=op1+op2;
            push(result);
            break;
            case '-':
            result=op1-op2;
            push(result);
            break;
            case '*':
            result=op1*op2;
            push(result);
            break;
            case '/':
            result=op1/op2;
            push(result);
            break;
            case '^':
            result=pow(op1,op2);
            push(result);
            break;
         }
      }
   }
   printf("RESULT : \t %d",stack[top]); 
}
void main()
{
   char arr[100];
   printf("Enter the Postfix Expression : \n");
   scanf("%s",arr);
   int n=strlen(arr);
   max=n;
   stack=calloc(n,sizeof(int));
   eval(arr);
   free(stack);
}