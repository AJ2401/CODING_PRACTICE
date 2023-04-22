#include<iostream>
using namespace std;
void display(int arr[],int n)
{
   for(int i=0;i<n;i++)
   {
      cout<<" "<<arr[i]<<" ";
   }
}
void merge(int arr[],int s,int mid,int n)
{
   int l1=mid-s+1;
   int l2=n-mid;
   int a1[l1],a2[l2];

   for(int i=0;i<l1;i++)
   {
      a1[i]=arr[i+s];
   }
   for(int i=0;i<l2;i++)
   {
      a2[i]=arr[i+mid+1];
   }
   int p=0,q=0,r=s;
   while(p<l1 && q<l2)
   {
      if(a1[p]<a2[q])
      {
         arr[r]=a1[p];
         p++;
      }
      else{
         arr[r]=a2[q];
         q++;
      }
      r++;
   }
   while(p<l1)
   {
      arr[r]=a1[p];
      p++;
      r++;
   }
   while(q<l2)
   {
      arr[r]=a2[q];
      q++;
      r++;
   }
}
void merge_sort(int arr[],int s,int n)
{
  if(s<n)
   {
      int mid=(s+n)/2;

      merge_sort(arr,s,mid);
      merge_sort(arr,mid+1,n);

      merge(arr,s,mid,n);
   }
}
int main()
{
   int n;
   cout<<"Enter the Number : \n";
   cin>>n;
   int arr[n];
   cout<<"Enter the Array Elements : \n";
   for(int i=0;i<n;i++)
   {
      cout<<"Element "<<i+1<<endl;
      cin>>arr[i];
   }
   cout<<"The Array is "<<endl;
   display(arr,n);
   cout<<"The Sorted Array is : \n";
   merge_sort(arr,0,n);
   display(arr,n);
   return 0;
}