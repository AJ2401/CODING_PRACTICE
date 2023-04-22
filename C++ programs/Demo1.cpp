//Summation of N numbers
#include<iostream>
using namespace std;
int main()
{
     int n,sum=0;
     cout<<"Enter the Number : \n";
     cin>>n;
     for(int i=0;i<=n;i++)
     {
          sum=sum+i;
     }
     cout<<"The Summation is \t"<<sum;
}