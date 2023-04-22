#include<iostream>
#include "display.h"
#include "swap.h"
using namespace std;

void merges(int arr[],int l,int m ,int u)
{
     int l1=m-l+1;
     int l2=u-m;

     int a1[l1];
     int a2[l2];

     for(int i=0;i<l1;i++)
     {
          a1[i]=arr[i+l];
     }
     for(int i=0;i<l2;i++)
     {
          a2[i]=arr[m+1+i];
     }
     int p=0;
     int q=0;
     int r=l;
     while(p<l1 && q<l2)
     {
          if(a1[p]>a2[q])
          {
               arr[r]=a2[q];
               q++;
               r++;
          }
          else if(a1[p]<a2[q])
          {
               arr[r]=a1[p];
               p++;
               r++;
          }
     }
     while(p<l1)
     {
          arr[r]=a1[p];
          r++;
          p++;
     }
     while(q<l2)
     {
          arr[r]=a2[q];
          q++;
          r++;
     }
}
void merge_Sort(int arr[],int l,int u)
{
     if(l<u)
     {
          int mid=l+u/2;

          merge_Sort(arr,l,mid);
          merge_Sort(arr,mid+1,u);

          merges(arr,l,mid,u);
     }
}
int main()
{
     int n;
     cout<<"Enter the Size of the Array : \n";
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++)
     {
          cout<<"Enter Element "<<i+1<<": \t";
          cin>>arr[i];
     }
     cout<<"The Array is : \n";
     display(arr,n);
     merge_Sort(arr,0,n-1);
     cout<<"\nThe Sorted Array is : \n";
     display(arr,n);
}
