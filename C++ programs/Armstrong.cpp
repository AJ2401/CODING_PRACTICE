//Armstrong Number 
#include<iostream>
using namespace std;

int main()
{
     int num;
     cout<<"Enter the Number :\n";
     cin>>num;
     int number=num;
     int n,cube,sum=0;
     while(num)
     {
          n=num%10;
          cube=n*n*n;
          sum=sum+cube;
          num=num/10;
     }
     if(sum==number)
     {
          cout<<number<<"  Is a Armstrong Number \n";
     }
     else
     {
          cout<<number<<"  Is not a Armstrong Number \n";
     }
}