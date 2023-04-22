//Frog Jump 
#include<iostream>
using namespace std;
int min(int arr[],int n)
{
   int mini=arr[0];
   for(int i=1;i<n;i++)
   {
      if(mini>arr[i]){
         mini=arr[i];
      }
   }
   return(mini);
}
int func(int arr[],int n)
{
   int sum[n];
   if(n==0)
   {
      sum[0]=arr[0];
      //return(arr[0]);
   }
   if(n==1)
   {
      int ans;
      if(arr[0]>arr[1]){
         sum[1]=arr[0]-arr[1];
      }
      else{
         sum[1]=arr[1]-arr[0];
      }
   }
   else{
   for(int i=2;i<n;i++)
   {
      int l=arr[i-1];
      int r=arr[i-2];
      if(l>r)
      {
         sum[i]=l-r;
      }
      else{
         sum[i]=r-l;
      }
   }
   }
  int mini=min(sum,n);
   return(mini);
}
int main()
{
   int n;
   cout<<"Enter the Size of the Array : \n";
   cin>>n;
   int arr[n];
   cout<<"Enter the Elements : \n";
   for(int i=0;i<n;i++)
   {
      cout<<"Weight "<<i+1<<endl;
      cin>>arr[i];
   }
   int res=func(arr,n);
   cout<<"Minimum Path is :\n"<<res<<endl;
}