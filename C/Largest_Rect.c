#include<stdio.h>
#include<stdlib.h>
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
     // return(ele);
   }
}
int peek()
{
   int ele=stack[top];
   return(ele);
}
int*prevsmall(int arr[max])
{
   int*ps;
   ps=calloc(max,sizeof(int));
   for(int i=0;i<max;i++)
   {
      while(top!=-1 && stack[top]>=arr[i])
      {
         pop();
      }
      if(top==-1)
      {
         ps[i]=-1;
      }
      else
      {
         ps[i]=peek();
      }
      push(i);
   }
   return(ps);
   free(ps);
}
int*nextsmall(int arr[max])
{
   int*ns;
   ns=calloc(max,sizeof(int));
   for(int i=0;i<max;i++)
   {
      while(top!=-1 && stack[top]<=arr[i])
      {
         pop();
      }
      if(top==-1)
      {
         ns[i]=-1;
      }
      else
      {
         ns[i]=peek();
      }
      push(i);
   }
   return(ns);
   free(ns);
}
int maximum(int result,int current)
{
   if(current>result)
   {
      return(current);
   }
   if(result>current)
   {
      return(result);
   }
   if(current==result)
   {
     return(result);
   }
   else
   {
      return(-1);
   }
}
int maxRect(int arr[max])
{
   int result=0,current=0;
   int*arr1=prevsmall(arr);
   int*arr2=nextsmall(arr);
   for(int i=0;i<max;i++)
   {
      current=((arr2[i]-arr1[i]-1)*arr[i]);
      result=maximum(result,current);
   }
   return(result);
}
void main()
{
   int arr[]={2,1,5,6,2,3};
   max=(sizeof(arr)/sizeof(int));
   stack=calloc(max,sizeof(int));
  int rect=maxRect(arr);
  printf("The Maximum Area is : %d",rect);
  free(stack);
}