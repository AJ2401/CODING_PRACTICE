#include<iostream>
using namespace std;
int main()
{
    int A[8]={12,2,3,5,8,7,2,5};
    int i=0;
    int j=7;
    int temp;
    while(i<=j)
    {
        cout<<A[i]<<"  ";
        i++;
    }
    cout<<endl;
    while(j>=i)
    {
        while(i<j)
        {
            if(A[i]>A[j])
            {
              temp=A[i];
              A[i]=A[j];
              A[j]=temp;
            }
            i++;
        }
        j--;
    }
    while(i<=j)
    {
        cout<<A[i]<<" , ";
        i++;
    }
}
