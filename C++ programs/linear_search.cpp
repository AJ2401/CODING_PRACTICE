#include<iostream>
using namespace std;

int main()
{
     int key,n,flag=0;
     cout<<"Enter the Size if the Array : ";
     cin>>n;
     cout<<"Enter the KEY : \n";
     cin>>key;
     int arr[n];
     for(int i=0;i<n;i++)
     {
          cout<<"Enter Element "<<i+1<<"\n";
          cin>>arr[i];
     }
     for(int i=0;i<n;i++)
     {
          if(key==arr[i])
          {
               flag=1;
               cout<<"The Key is Found at position "<<i+1;
               break;
          }
     }
     if(flag==0)
     {
          cout<<"The key is not Found ";
     }
}