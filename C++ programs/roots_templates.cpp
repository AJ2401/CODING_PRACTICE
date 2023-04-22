#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
template<class T>
void Roots(T a,T b,T c)
{
    T d=b*b-(4*a*c);
    if(d==0)
    {
        cout<<"The Roots are Equal "<<-b/(2*a)<<endl;
    }
    else if(d>0)
    {
        float R=sqrt(d);
        float R1=(-b-R)/(2*a);
        float R2=(-b+R)/(2*a);
        cout<<"Roots are Real "<<R1<<"  "<<R2<<endl;
    }
    else
    {
        double R=sqrt(-d);
        float R1=-b/(2*a);
        double R2=R/(2*a);
        cout<<"The Real Root is "<<R1<<endl;
        cout<<"The Imaginary root is "<<R2<<" i"<<endl;
    }
}
int main()
{
    cout<<"Integer Coefficient are:"<<endl;
    Roots(1,2,1);
    cout<<"Float Coefficients are :"<<endl;
    Roots(1.5,3.6,5.0);
    return 0;
}
