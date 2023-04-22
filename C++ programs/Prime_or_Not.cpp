//Prime Number Or Not 
#include<iostream>
using namespace std;

int main()
{
     int n;
     cout<<"Enter the Number : ";
     cin>>n;
     if(n%2==0)
     {
          cout<<"The Numer is Prime "<<n;
     }
     else
     {
        cout<<"The Numer is NOT Prime "<<"\n"<<n;  
     }
     return 0;
}