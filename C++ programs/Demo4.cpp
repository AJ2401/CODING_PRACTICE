//Pattern 
/*
     * * * * 
     * * *
     * *
     * 
*/
#include<iostream>
using namespace std;

int main()
{
     int n;
     cout<<"Enter the Value of n : \n";
     cin>>n;
     char arr[n][n];    
     for(int i=0;i<n;i++)
     {
          for(int j=0;j<n;j++)
          {
               arr[i][j]=' ';
          }
     }
     for(int i=0;i<n;i++)
     {
          for(int j=0;j<n-i;j++)
          {
               arr[i][j]='*';
          }
     }
     for(int i=0;i<n;i++)
     {
          for(int j=0;j<n;j++)
          {
               cout<<arr[i][j]<<" ";
          }
          cout<<"\n";
     }
}