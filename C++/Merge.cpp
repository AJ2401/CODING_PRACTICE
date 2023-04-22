#include<iostream>
using namespace std;
int main()
{
    int A[25],B[25],C[70];
    int n,m;
    cout<<"The Number of Elements to be Entered : "<<endl;
    cin>>n;
    cout<<"Enter the Elements of Array 1 : "<<endl;
    for(int i=0;i<n;i++)
    {
       cin>>A[i];
    }
    cout<<"The Number of Elements to be Entered : "<<endl;
    cin>>m;
    cout<<"Enter the Elements of Array 2: "<<endl;
     for(int i=0;i<m;i++)
    {
       cin>>B[i];
    }
    int k;
    k=n+m;
    for(int i=0;i<n;i++)
    {
        C[i]=A[i];
    }
    for(int i=n,j=0;i<k;i++,j++)
    {
        C[i]=B[j];
    }
    cout<<"The Merged Array is :  "<<endl;
    for(int i=0;i<k;i++)
    {
        cout<<C[i]<<"  ";
    }
}
