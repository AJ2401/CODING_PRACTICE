#include<iostream>
using namespace std;
int main()
{
    int Num,n,C=0,A=0,B=0;
    cout<<"Enter the number of times to Iterate it : "<<endl;
    cin>>Num;
    for(int i=1;i<Num;i++)
    {
        cout<<"Enter Any Number:"<<endl;
        cin>>n;
        if(n>0)
        {
          A++;
        }
        if(n<0)
        {
           B++;
        }
        if(n==0)
        {
          C++;
        }
    }
    cout<<"How Many Entered Numbers Are Positive ? "<<endl<<A<<endl;
    cout<<"How Many Entered Numbers Are Negative ?"<<endl<<B<<endl;
    cout<<"How Many Entered Numbers Are Zeros ?"<<endl<<C<<endl;
}
