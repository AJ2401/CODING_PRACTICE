//Pattern 
/*
     * * * *
     * * * * 
     * * * *
     * * * *
*/
#include<iostream>
using namespace std;

int main()
{
     int n;
     cout<<"Enter the Matrix Size\t";
     cin>>n;
     char arr[n][n];
     for(int i=0;i<n;i++)
     {
          for(int j=0;j<n;j++)
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
