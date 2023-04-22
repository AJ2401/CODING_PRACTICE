#include<iostream>
using namespace std;
 void operations(int a,int b)
    {
        int x;
        x=a+b;
        x=a-b;
        x=a/b;
        //x=a*b;
        if(x==1)
            {
                throw(x);
            }
        else
        {
            cout<<"The values of a and b are not same \n";
        }

    }
int main()
{
    int p,q;
    cout<<"Enter the two integer "<<endl;
    cin>>p>>q;
     try
    {
        cout<<"We are inside TRY block"<<endl;
        operations(p,q);
    }
    catch(int y)
    {
        cout<<"Exception is caught"<<endl;
    }
    return 0;
}
