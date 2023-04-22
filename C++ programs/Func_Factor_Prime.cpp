#include<iostream>
using namespace std;
void Func(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {cout<<i<<" , ";}
    }
}

int main()
{
    int Num;
    cout<<"Enter any Integer :"<<endl;
    cin>>Num;
    cout<<"The Prime Factors are :"<<endl;
    Func(Num);
}
