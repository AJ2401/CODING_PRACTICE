#include <iostream>
using namespace std;
int n;
void intail(int**arr)
{
   for(int i=0;i<n;i++)
   {
      for(int j=0;j<n;j++)
      {
         arr[i][j]=0;
      }
   }
}
bool check(int**arr,int x,int y)
{
   if(arr[x][y]==1)
   {
      return(true);
   }
   return false;
}
bool maze(int** arr,int x,int y,int**sol)
{
   if(x==n-1 && y==n-1)
   {
      sol[x][y]=1;
      return(true);
   }
   if(check(arr,x,y))
   {
      sol[x][y]=1;
      if(maze(arr,x+1,y,sol))
      {
         return true;
      }
      if(maze(arr,x,y+1,sol))
      {
         return(true);
      }
      else{
         sol[x][y]=0;
         return(false);
      }
   }
   return(false);
}
void display(int**arr){
   for(int i=0;i<n;i++)
   {
      for(int j=0;j<n;j++)
      {
         cout<<" "<<arr[i][j]<<" ";
      }
      cout<<endl;
   }
}
int  main(){
   cout<<"Enter the Size of the Maze : \n";
   cin>>n;
   int**arr=new int*[n];
   int**sol=new int*[n];
   for(int i=0;i<n;i++)
   {
      arr[i]=new int[n];
   }
   for(int i=0;i<n;i++)
   {
      sol[i]=new int[n];
   }
   
   //intail(arr);
   intail(sol);
   for(int i=0;i<n;i++)
   {
      for(int j=0;j<n;j++)
      {
         cout<<"Element "<<j+1<<" : ";
         cin>>arr[i][j];
      } 
      cout<<endl;
   }
   cout<<"The Maze path is : \n";
   display(arr);
   bool res=maze(arr,0,0,sol);
   cout<<"Is there any Possible Path : "<<res<<endl;
   if(res==true)
   {
      display(sol);
   }
   else{
      cout<<"No Possible Path \n";
   }
   return(0);
} 
/*1  0  1  0  1 
 1  1  1  1  1 
 0  1  0  1  0 
 1  0  0  1  1 
 1  1  1  0  1 */