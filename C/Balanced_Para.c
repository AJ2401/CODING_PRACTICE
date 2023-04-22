#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#define true 1
#define false 0
char *stack;
int top=-1;
int max;
void push(char  item)
{
   if(top>=max)
   {
      printf("OverFlow !!");
   }
   else
   {
      top++;
      stack[top]=item;
   }
}
void pop()
{
   char ele;
   if(top==-1)
   {
     printf("UnderFlow !!");
   }
   else
   {
      ele=stack[top];
      top--;
   }
}
bool valid(char arr[max])
{
   for(int i=0;i<max;i++)
   {
      if(arr[i]=='(' || arr[i]=='{' || arr[i]=='[')
      {
         push(arr[i]);
      }
     else if(arr[i]==')')
      {
         if(stack[top]=='(')
         {
            pop();
            return true;
         }
         else
         {
            return false;
         }
      }
       else if(arr[i]==']')
      {
         if(stack[top]=='[')
         {
            pop();
            return true;
         }
         else
         {
            return false;
         }
      }
       else if(arr[i]=='{')
      {
         if(stack[top]=='}')
         {
            pop();
            return true;
         }
         else
         {
            return false;
         }
      }
   }
}
void main()
{
   char *arr;
   printf("Check for the Paranethisis : \n");
   scanf("%s",arr);
   max=strlen(arr);
   stack=calloc(max,sizeof(char));
   bool res=valid(arr);
   if(res==true){
   printf("VALID");
   }
   else if(res==false)
   {
      printf("INVALID");
   }
}