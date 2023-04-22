//Pattern
// column+row = even then 1
// column+row = odd then 0

#include<iostream>
using namespace std;

int main()
{
     int n;
     cout<<"Enter the Size of the Matrix : ";
     cin>>n;
     int arr[n][n];
     for(int i=0;i<n;i++)
     {
          for(int j=0;j<=i;j++)
          {
               if((i+j)%2==0)
               {
                    arr[i][j]=1;
               }
               else
               {
                    arr[i][j]=0;
               }
          }
     }
     for(int i=0;i<n;i++)
     {
          for(int j=0;j<=i;j++)
          {
               cout<<arr[i][j]<<"\t";
          }
          cout<<"\n";
     }
}

