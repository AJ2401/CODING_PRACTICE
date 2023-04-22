//MAXIMUM AMT of Robbery
//Last house is adj to first house
//Circular
#include<iostream>
#include<array>
#include<stdlib.h>
using namespace std;

int max(int a,int b)
{
   if(a>b)
   {
      return(a);
   }
   else{ 
      return b;
   }
}
void intial(int arr[],int n)
{
   for(int i=0;i<n;i++)
      {
         arr[i]=-1;
      }
}
int func(int arr[],int n,int sol[],int u)
{
   if(n==0){
       if(sol[u]!=-1){
      return(0);
   }
   else{
      sol[0]=arr[0];
      return(sol[0]);
   }
   }
   if(n<0){
      return(0);
   }
   if(sol[n]!=-1){
      return(sol[n]);
   }
   else{
      int l=func(arr,n-2,sol,u)+arr[n];
      int r=func(arr,n-1,sol,u)+0;
      sol[n]=max(l,r);
      return(sol[n]);
   }
}
int result(int arr[],int n)
{
   int sol[n];
   intial(sol,n);
   return(func(arr,n-1,sol,n));
}
int main()
{
    int n;
   cout<<"Enter the Size of the Array : \n";
   cin>>n;
   int arr[n];
   cout<<"Enter the Elements of array : \n";

   for(int i=0;i<n;i++)
   {
      cout<<"Element "<<i+1<<" :  ";
      cin>>arr[i];
   }
   int res=result(arr,n);
   cout<<"The Result is \n "<<res<<endl;
   return(0);
}