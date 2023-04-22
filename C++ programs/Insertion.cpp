#include<iostream>
#include "display.h"
using namespace std;

void insertion(int arr[],int n)
{
     for(int i=1;i<n;i++)
     {
          int a=arr[i];
          int j=i-1;
          while(j>=0 && a<arr[j])
          {
               arr[j+1]=arr[j];
               j--;
          }
          arr[j+1]=a;
     }
}
int main()
{
     int n;
     cout<<"Enter the Size of the Array :"<<endl;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++)
     {
          cout<<"Element "<<i+1<<"\t";
          cin>>arr[i];
     }
     cout<<"The Array is : \n";
     display(arr,n);
     insertion(arr,n);
     cout<<"The Sorted Array is : \n";
     display(arr,n);
}