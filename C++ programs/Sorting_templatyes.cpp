#include<iostream>
using namespace std;
template<class T>
void Func(T v[],int n)
{
    for(int i=0;i<n-1;i++)
    {for(int j=n-1;i<j;j--)
    {
        if(v[j]<v[j-1])
        {
            T tempo=v[j];
            v[j]=v[j-1];
            v[j-1]=tempo;
        }
    }
}
}
int main()
{
    int x[5]={12,11,0,3,4};
  cout<<"The unsorted Integer array is:"<<endl;
    for(int i=0;i<5;i++)
    {
       cout<<x[i]<<"  ";
    }
    cout<<endl;
     float y[5]={12.1,3.2,4.5,6.1,8.2};
    cout<<"The unsorted Float array is:"<<endl;
    for(int i=0;i<5;i++)
    {
       cout<<y[i]<<"  ";
    }
    cout<<endl;

    Func(x,5);
    Func(y,5);
    cout<<"The sorted Integer array is:"<<endl;
    for(int i=0;i<5;i++)
    {
       cout<<x[i]<<"  ";
    }
    cout<<endl;
    cout<<"The sorted Float array is:"<<endl;
    for(int i=0;i<5;i++)
    {
       cout<<y[i]<<"  ";
    }
    return 0;
}
