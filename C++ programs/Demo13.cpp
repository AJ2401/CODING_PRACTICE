//pattern
#include<iostream>
using namespace std;

int main()
{
     int n;
     cout<<"Enter the N value : \n";
     cin>>n;
     for(int i=1;i<=n;i++)
     {
          for(int i=0;i<=n-i;i++)
          {
               cout<<" ";
          }
          for(int j=1;j<=i;j++)
          {
               cout<<j<<" ";
          }
          cout<<"\n";
     }
}