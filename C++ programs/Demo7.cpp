//Pattern
/*
     1
     2 2
     3 3 3
     4 4 4 4
*/
#include<iostream>
using namespace std;

int main()
{
     int n;
     cout<<"Enter the value of n  ";
     cin>>n;
     int arr[n][n];
     int c=1;
     for(int i=n-1;i>=0;i--)
     {
          for(int j=n-1;j>=i;j--)
          {
               arr[i][j]=c;
          }
          c++;
     }
     for(int i=n-1;i>=0;i--)
     {
          for(int j=n-1;j>=i;j--)
          {
              cout<<arr[i][j]<<" ";
          }
          cout<<"\n";
     }
}


     