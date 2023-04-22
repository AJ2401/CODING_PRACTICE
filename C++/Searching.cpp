#include<iostream>
using namespace std;
int main()
{
    int n,num;
    cout<<"The Number of Elements in An Array : "<<endl;
    cin>>n;

    int A[n];

    cout<<"Enter the Elements of an Array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<endl<<endl;
    cout<<"Enter The Element to be Searched : "<<endl;
    cin>>num;

    cout<<"The Positions are at :"<<endl;
    for(int i=0;i<n;i++)
    {
        if(num==A[i])
        {
            cout<<i<<"th position "<<endl;
        }
    }
}
