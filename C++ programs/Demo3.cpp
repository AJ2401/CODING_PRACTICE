//Pattern
/*
     * * * *
     *     *
     *     *
     *     *
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
     for(int i=1;i<=n;i++)
     {
          for(int j=1;j<=n;j++)
          {
              arr[i][j]=' ';
          }
     }
     for(int i=1;i<=n;i++)
     {
          for(int j=1;j<=n;j++)
          {
               if(j==1 || j==n || i==1 ||i==n){
               arr[i][j]='*';
               }
          }
     }
     for(int i=1;i<=n;i++)
     {
          for(int j=1;j<=n;j++)
          {
               cout<<arr[i][j]<<" ";
          }
          cout<<"\n";
     }
}
