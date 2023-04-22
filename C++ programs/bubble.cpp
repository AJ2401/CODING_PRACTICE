#include<iostream>
#include "display.h"
#include "swap.h"
using namespace std;

int main()
{
     int n;
     cout<<"Enter the Value of n :";
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++)
     {
          cout<<"Enter the Element "<<i+1<<"\n";
          cin>>arr[i];
     }
     cout<<"The Array is : \n";
     display(arr,n);
     for(int i=0;i<n-1;i++)
     {
          for(int j=0;j<n-1-i;j++)
          {
               if(arr[j]>arr[j+1])
               {
                    swap(arr,j,j+1);
               }
          }
     }
      cout<<"\nThe Sorted Array is : \n";
     display(arr,n);
}