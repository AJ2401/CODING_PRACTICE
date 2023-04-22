#include<iostream>
using namespace std;
int main()
{
    int Num;
    cout<<"Enter any Number To get its Table : "<<endl;
    cin>>Num;
    cout<<"The Table of "<<Num<<" is :"<<endl;
    for(int i=1;i<=10;i++)
    {
        cout<<Num<<" x "<<i<<" = "<<Num*i<<endl;
    }
}
