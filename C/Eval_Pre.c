#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int*stack;
int max;
int top=-1;
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
void eval(char pre[max])
{
   int result=0;
   for(int i=max-1;i>=0;i--)
   {
      if(pre[i]>='0' && pre[i]<='9')
      {
         push(pre[i]-'0');
      }
      else 
      {
         int op1=stack[top];
         pop();
         int op2=stack[top];
         pop();
         switch (pre[i])
         {
         case '+' :
         result=op1+op2;
         push(result);
            break;
         case '-' :
         result=op1-op2;
         push(result);
            break;
         case '*' :
         result=op1*op2;
         push(result);
            break;
         case '/' :
         result=op1/op2;
         push(result);
            break;
         case '^' :
         result=pow(op1,op2);
         push(result);
          break;
         }
        //push(result);
      }
   }
   printf("\nRESULT : %d\t",stack[top]);
}
int main()
{
   int n=0;
   char pre[100];
   printf("Please Enter any prefix expression : \n");
   scanf("%s",pre);
   n=strlen(pre);
   max=n;
   stack=calloc(n,sizeof(int));
   eval(pre);
   /*max=n;
   eval("-+7*45+20");*/
   free(stack);
}
