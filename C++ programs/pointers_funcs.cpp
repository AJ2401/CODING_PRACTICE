#include<iostream>
using namespace std;
typedef void (*funcptr)(int,int);
void Add(int x,int y)
{
cout<<x<<" + "<<y<<" = "<<x+y<<endl;
}
void Sub(int x,int y)
{
cout<<x<<" - "<<y<<" = "<<x-y<<endl;
}

int main()
{
    funcptr ptr;
   ptr=&Add;
   ptr(4,5);
   cout<<endl;
    ptr=&Sub;
   ptr(6,5);
   cout<<endl;
   return 0;
}
