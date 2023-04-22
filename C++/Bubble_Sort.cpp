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
      cout<<arr[i]<<"  ";
   }
   cout<<endl;
}
void bubble(int arr[],int n)
{
   for(int i=0;i<n;i++)
   {
      for(int j=0;j<n;j++)
      {
         if(arr[j]>arr[j+1])
         {
            swap(arr,j,j+1);
         }
      }
   }
}
int main()
{
   int n;
   cout<<"Enter the Size of the Array : \n";
   cin>>n;
   int arr[n];
   cout<<"Enter the Array Elements : \n";
   for(int i=0;i<n;i++)
   {
      cout<<"Enter the Array element "<<i+1<<endl;
      cin>>arr[i];
   }
   cout<<"The Array is : \n";
   display(arr,n);
   cout<<"The Sorted Array is : \n";
   bubble(arr,n);
   display(arr,n);
return 0;
}