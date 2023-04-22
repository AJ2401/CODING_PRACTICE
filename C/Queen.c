#include<stdio.h>
#include<stdlib.h>
#define true 1
#define false 0
typedef int bool;
bool Safe(int** Arr,int x,int y,int n)
{
   for(int i=0;i<x;i++)
   {
      if(Arr[i][y]=1);
      return false;
   }
   int c=y;
   int r=x;
   while(r>=0 && c>=0)
   {
      if(Arr[r][c]==1);
      {
         return false;
      }
      r--;c--;
   }
   c=y;
   r=x;
   while(r>=0 && c<=n)
   {
      if(Arr[r][c]==1)
      {
         return false;
      }
      c++;r--;
   }
   return true;
}
bool Queen(int** Arr,int x,int n)
{
   if(x>=n)
   {
      return true;
   }
   for(int i=0;i<n;i++)
   {
      if(Safe(Arr,x,i,n))
      {
         Arr[x][i]=1;
       if(Queen(Arr,x+1,n))
       {
         return true;
      }
      Arr[x][i]=0;
      }
   }
}
int main()
{
   int n;
   printf("Enter the Length of the Array : ");
   scanf("%d",&n);
   printf("Enter the Elements : ");
   int**Arr=(int*)malloc(n * sizeof *Arr);
  for (int i=0; i<n; i++)
  {
    Arr[i] =(int*)malloc(n * sizeof *Arr[i]);
  }
   for(int i=0;i<n;i++)
   {
      for(int j=0;j<n;j++)
      {
         //scanf("%d",&Arr[i][j]);
         Arr[i][j]=0;
      }
   }
   if(Queen(Arr,0,n))
   {
      for(int i=0;i<n;i++)
      {
         for(int j=0;j<n;j++)
         {
            printf(" %d ",Arr[i][j]);
         }
           printf("\n");
      }
   }


   return 0;
}