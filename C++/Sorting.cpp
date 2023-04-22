#include<iostream>
using namespace std;
int main()
{
    int A[80];
    int n,a;
    cout<<"Enter the Number the iterations in the Array : "<<endl;
    cin>>n;
    cout<<"Enter the Elements of the Array :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<endl<<"Enter the Element to be Searched : "<<endl;
    cin>>a;
    for(int i=0;i<n;i++)
    {
        if(a==A[i])
        {
           cout<<endl<<"The Positions"<<A[i]<<":"<<endl<<i;
        }
    }

}
