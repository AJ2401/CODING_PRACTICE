#include<iostream>
using namespace std;
void operations(float a,float b)
{
    //int x;
    int x=a+b;
    int y=a-b;
    float z=a/b;
    //x=a*b;
    if(z==1||x==1||y==1)
    {
        throw(z);
    }
    else if(y==2)
    {
        throw 'a';
    }

    else
    {
        cout<<"The values of a and b are not same \n";
        throw(x);
        throw(y);
    }

}
int main()
{
    float p,q;
    cout<<"Enter the two integer "<<endl;
    cin>>p>>q;
    try
    {
        cout<<"We are inside TRY block"<<endl;
        operations(p,q);
    }
    catch(...)
    {
        //cout<<"Addition(int)"<<endl;
        //cout<<"division(float)"<<endl;
        //cout<<"made for subtraction but it will not go (second int)"<<endl;
        //cout<<"Exception is of char type"<<endl;
        cout<<"ALL TYPE OF EXCEPTION ARE CAUGHT HERE"<<endl;
    }
    return 0;
}

