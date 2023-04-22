#include<iostream>
#include<cmath>
using namespace std;
void Func(int*a,int*b,int*c)
{
    int s,area,x,y,z;
    float A;
    s=(*a+*b+*c)/2;
    x=s-*a;
    y=s-*b;
    z=s-*c;
   A=sqrt(s*x*y*z);
   cout<<"\tArea= "<<A<<endl;
}
int main()
{
    int a,b,c;
    cout<<"Enter Lengths of Three Sides :"<<endl;
    cin>>a>>b>>c;
    cout<<"Area of Triangle is :"<<endl;
    Func(&a,&b,&c);
}
