// Inverted Floyd's Triangle

#include<iostream>
using namespace std;

int main()
{
     int n;
     cout<<"Enter the Value of N : "<<"\n";
     cin>>n;
     int arr[n][n];
     for(int i=0;i<=n;i++)
     {
          for(int j=1;j<=n-i;j++)
          {
               arr[i][j]=j;
          }
     }
     for(int i=0;i<=n;i++)
     {
          for(int j=1;j<=n-i;j++)
          {
              cout<<arr[i][j]<<"\t";
          }
          cout<<"\n";
     }
     return 0; 
}