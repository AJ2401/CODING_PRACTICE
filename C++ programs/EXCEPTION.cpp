#include<iostream>
using namespace std;
int main()
{
    int a,b,x;
    cout<<"Enter the Two values"<<endl;
    cin>>a>>b;
    x=a-b;
    try
    {
        if(x!=0)
        {
           cout<<"\nThe a/x is ="<<(a/x)<<"\n";
        }
        else
        {
            throw(x);
        }
    }
    catch(int y)
    {
        cout<<"there is an exception caught "<<endl;
    }
    cout<<"\nThe End";
    return 0;
}
