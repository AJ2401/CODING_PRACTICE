#include<iostream>
using namespace std;
int main()
{
    int n;
    int temp;
    cout<<"Enter the Number for Number of Elements in an Array :"<<endl;
    cin>>n;
    int A[n];
    cout<<"Enter the Elements of the Array :"<<endl;
    for(int i=0;i<n;i++)
    {
      cin>>A[i];
    }
    cout<<endl<<"The unsorted Array is : "<<endl;
     for(int i=0;i<n;i++)
    {
      cout<<A[i]<<" ; ";
    }
    cout<<endl<<endl<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(A[i]>A[j])
            {
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }
    cout<<"The Sorted Array is : "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<A[i]<<" , ";
    }
}
