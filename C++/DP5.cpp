//Maximum Sum of Non Adj Elements 
#include<iostream>
using namespace std;
int max(int a,int b)
{
   int temp;
   if(a>b)
   {
      temp=a;
   }
   else{
      temp=b;
   }
   return(temp);
}
void intial(int arr[],int n)
{
   for(int i=0;i<n;i++)
   {
      arr[i]=-1;
   }
}
int f(int arr[],int n,int sol[])
{
   if(n==0)
   {
      return(arr[n]);
   }
   if(n<0)
   {
      return(0);
   }
   if(sol[n]!=-1){
      return(sol[n]);
   }
      int p=arr[n]+f(arr,n-2,sol);
      int np=f(arr,n-1,sol)+0;
      sol[n]=max(p,np);
      return(sol[n]);
}
int func(int arr[],int n)
{
   int sol[n];
   intial(sol,n);
  return(f(arr,n-1,sol));
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
   int res=func(arr,n);
   cout<<"The Result is \n "<<res<<endl;
   return(0);
}