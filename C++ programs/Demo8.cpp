//Floyd's Triangle
/*
     1
     2 3 
     4 5 6 
     7 8 9 10
     11 12 13 14 15
*/
#include<iostream>
using namespace std;

int main()
{
     int n;
     cout<<"Entter the Value of n : \n";
     cin>>n;
     int arr[n][n];
     int c=1;
     for(int i=0;i<n;i++)
     {
          for(int j=0;j<=i;j++)
          {
               arr[i][j]=c;
               c++;
          }
     }
     for(int i=0;i<n;i++)
     {
          for(int j=0;j<=i;j++)
          {
               cout<<arr[i][j]<<"  ";
          }
          cout<<"\n";
     }
}