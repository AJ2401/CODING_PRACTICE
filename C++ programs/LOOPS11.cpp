#include<iostream>
using namespace std;
int main()
{
    cout<<"24 Hours in a Day : "<<endl;
    for(int i=1;i<=24;i++)
    {
        if(i==24)
        {
            cout<<i<<" "<<"Midnight"<<endl;
        }
        if(i>=1 && i<12)
        {
            cout<<i<<" "<<"AM"<<endl;
        }
        if(i==12)
        {
            cout<<i<<" "<<"Noon"<<endl;
        }
        if(i>12 && i<24)
        {
            cout<<i<<" "<<"PM"<<endl;
        }
    }
}
