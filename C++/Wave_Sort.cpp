#include<iostream>
using namespace std;
void swap(int arr[],int p1,int p2)
{
   int temp=arr[p1];
   arr[p1]=arr[p2];
   arr[p2]=temp;
}
void display(int arr[],int n)
{
   for(int i=0;i<n;i++)
   {
      cout<<"  "<<arr[i]<<"  ";
   }
   cout<<endl;
}
void wave_sort(int arr[],int n)
{
   for(int i=1;i<n-1;i+=2)
   {
      if(arr[i-1]>arr[i])
      {
         swap(arr,i,i-1);
      }
      if(arr[i]<arr[i+1] && i<=n-2)
      {
         swap(arr,i,i+1);
      }
      
   }
   cout<<"The Sorted Array is : \n";
   display(arr,n);
}
int main()
{
   int n;
   cout<<"Enter the Size of the Array  \n";
   cin>>n;
   int arr[n];
   cout<<"Enter the Elements of the Array : \n";
   for(int i=0;i<n;i++)
   {
      cout<<"Element "<<i+1<<endl;
      cin>>arr[i];
   }
   cout<<"The Array is : \n";
   display(arr,n);
   wave_sort(arr,n);
}