// Butterfly Pattern
#include<iostream>
using namespace std;

int main()
{
     int n;
     cout<<"Enter the Value of n : ";
     cin>>n;
     int m=2*n;
     char arr[m][m];
     for(int i=0;i<m;i++)
     {
          for(int j=0;j<m;j++)
          {
               arr[i][j]=' ';
          }
     }
     for(int i=m-1;i<n;i++)
     {
          for(int j=0;j<=i;j++)
          {
               arr[i][j]='*';
          }

     }
     for(int i=0;i<m;i++)
     {
          for(int j=0;j<m;j++)
          {
               cout<<arr[i][j]<<" ";
          }
          cout<<"\n";
     }

}