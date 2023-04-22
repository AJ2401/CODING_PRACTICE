#include<stdio.h>
#include<stdlib.h>
#define false 0
#define true 1
typedef int bool;
bool Safe(int[][]arr,int n,int x,int y)
{
   if(x<n && y<n && arr[x][y]==1)
   {
      return true;
   }
   return false;
}
bool Way(int arr[][],int n,int x,int y,int res[][])
{
   if(Safe(arr,n,x,y))
   {
      res[x][y]=1;
      return true;
   }
   if(Way(arr,n,x+1,y,res));
   {
      return true;
   }
   if(Way(arr,n,x,y+1,res))
   {
      return true;
   }

}
int main()
{
   int n;
   printf("Enter the Value of N ? ");
   scanf("%d",&n);
   int Arr[n][n],res[n][n];
      for(int i=0;i<n;i++)
   {
      for(int j=0;j<n;j++){
      scanf("%d",&Arr[i][j]);
   }
   }
   for(int i=0;i<n;i++)
   {
      for(int j=0;j<n;j++)
      {
         printf(" %d ",Arr[i][j]);
      }
      printf("\n");
   }
   for(int i=0;i<n;i++)
   {
      for(int j=0;j<n;j++)
      {
         res[i][j]=0;
      }
 }
 if(Way(Arr,n,0,0,res));
 {
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<n;j++)
       {
          printf(" %d ",res[i][j]);
       }
       printf("\n");
    }
 }
   return 0;
}
/*
1 0 1 0 1
1 1 1 1 1
0 1 0 1 0
0 1 0 1 0
1 0 0 1 1
1 1 1 0 1
*/
