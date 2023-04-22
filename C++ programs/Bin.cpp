#include<iostream>
#include"display.h"
#include"swap.h"
using namespace std;
int flag=0;
void bin(int arr[],int key,int l,int u)
{
     if(l<u)
     {
          int mid=l+u/2;
          if(arr[mid]==key)
          {
               flag=1;
          }
          else if(arr[mid]>key)
          {
               bin(arr,key,mid+1,u);
          }
          else if(arr[mid]<key)
          {
               bin(arr,key,l,mid-1);
          }

     }
}
void bubble(int arr[],int n)
{
     for(int i=0;i<n-1;i++)
     {
          for(int j=0;j<n-i-1;j++)
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
     int n,key;
     cout<<"Enter the Size of the Array : \n";
     cin>>n;
     cout<<"Enter the Key : \n";
     cin>>key;
     int arr[n];
     for(int i=0;i<n;i++)
     {
          cout<<"Enter Element : "<<i+1<<"\t";
          cin>>arr[i];
     }
     cout<<"\nThe Array is : \n";
     display(arr,n);
     bubble(arr,n);
     cout<<"\nThe Sorted Array is : \n";
     display(arr,n);
     bin(arr,key,0,n-1);
     if(flag==1)
     {
          cout<<"\nThe Key is Found"<<endl;
     }
     else if(flag==0)
     {
          cout<<"\nThe Key is Not Found "<<endl;
     }
}