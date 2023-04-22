#include<iostream>
using namespace std;
int main()
{
    int A[15];
    int n;
    int x;
    cout<<"Enter the Number of Elements in an Array : "<<endl;
    cin>>n;
    cout<<endl<<"Enter the Number To be deleted : "<<endl;
    cin>>x;
    cout<<"Enter the Array Elements : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<=n;i++)
    {
        if(x==A[i])
        {
            A[i]=x;
        for(int j=i;j<=n;j++)
        {
            A[j]=A[j+1];
        }
        }
    }
    cout<<endl<<endl<<"The modified Array "<<endl;
    for(int i=0;i<n-1;i++)
    {
        cout<<A[i]<<"  ";
    }
}
