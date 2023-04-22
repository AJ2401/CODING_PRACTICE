#include<iostream>
#include<cmath>
using namespace std;
void Func(int A,int B,int C)
{
    int S;
    float Ar;
    S=(A+B+C)/2;
    int x=S-A;
    int y=S-B;
    int z=S-C;
    Ar=sqrt(S*x*y*z);
    cout<<" The Area = "<<Ar;
}
int main()
{
    int X1,X2,X3,Y1,Y2,Y3,A,B,C,a,b,c,x,y,z;
    cout<<"Enter the Coordinates (X1,Y1): "<<endl;
    cin>>X1>>Y1;
    cout<<"Enter the Coordinates (X2,Y2): "<<endl;
    cin>>X2>>Y2;
    cout<<"Enter the Coordinates (X3,Y3): "<<endl;
    cin>>X3>>Y3;
    a=pow((X1-X2),2);
    b=pow((X2-X3),2);
    c=pow((X1-X3),2);
    x=pow((Y1-Y2),2);
    y=pow((Y2-Y3),2);
    z=pow((Y1-Y3),2);
    A=sqrt(a+x);
    B=sqrt(b+y);
    C=sqrt(c+z);
    cout<<" The Area Through Coordinates : "<<endl;
    Func(A,B,C);
}
