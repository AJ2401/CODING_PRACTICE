#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int q,n;
    float r,p;
    for(int i=0;i<10;i++)
    {
        cout<<"The Compound Interest Per year is :"<<endl;
        cin>>q;
        cout<<"The Rate of Interest Per Annum is :"<<endl;
        cin>>r;
        cout<<"The Number of Years : "<<endl;
        cin>>n;
        cout<<"The Principal Amount is : "<<endl;
        cin>>p;
        float c=1+(r/q);
        int d=n*q;
        float b=pow(c,d);
        float a=p*b;
        cout<<"The compound Amount After the Interests is : "<<endl<<a<<endl;
        cout<<endl<<endl<<endl;
    }
}
