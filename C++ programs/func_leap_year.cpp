#include<iostream>
using namespace std;
void Func(int x)
{
    if(x%100==0 || x%4==0 || x%400==0)
    {
        cout<<endl<<x<<" is a Leap Year "<<endl;
    }
    else
        {
            cout<<endl<<x<<" is not a Leap Year "<<endl;
        }
}
int main()
{
    int num;
    cout<<" Enter the Year to Check if it is leap year or not :"<<endl<<endl;
    cin>>num;
    Func(num);
}
