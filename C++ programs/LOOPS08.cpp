#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int Num,Sum=0;
    cout<<"Enter the value of X : "<<endl;
    cin>>Num;
    float a=0.5*(Num-1)/Num;
    for(int i=2;i<7;i++)
    {
        float b=(a,i);
        Sum=2*a+b+Sum;
    }
    cout<<"The Answer is = "<<Sum<<endl;
}
