#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    cout.width(12);
    cout<<"Numbers";
    cout.width(16);
    cout<<"Square roots "<<endl;
    cout.fill('@');
    for(int i=1;i<55;i++)
    {
        cout.width(6);
        cout<<i;
        cout.width(15);
        cout.precision(2);
        cout<<sqrt(i)<<endl;
    }
    //cout.fill('@');
    cout<<"\nNow precision is being changed to 6"<<endl;
    cout.precision(6);
    cout<<sqrt(1082)<<endl;
    cout<<"\nNow precision is being changed to 8"<<endl;
    cout.precision(8);
    cout<<sqrt(10589)<<endl;
    cout<<"\nNow precision is being changed to 0"<<endl;
    cout.precision(0);
    cout<<sqrt(12)<<endl;
    return 0;
}
