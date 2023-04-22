#include<iostream>
using namespace std;
int main()
{
    int A[5];
    int n,k;
    cout<<"Enter The number of Elements in an Array : "<<endl;
    cin>>n;
    cout<<"Enter the Elements of the Array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"Enter Number  to be Inserted : "<<endl;
    cin>>k;
    if(n==5)
    {
        cout<<"The Array is Full "<<endl;
    }
    else
    {
        for(int i=n;i>=0;i--)
        {
            A[i+1]=A[i];
        }
        A[0]=k;
        cout<<"The Modified Array is : "<<endl;
         for(int i=0;i<n;i++)
    {
       cout<<A[i]<<"  ";
    }

    }
}
