#include<iostream>
using namespace std;
void division(double x,double y)
{
    try
    {
        if(y==0.0)
        {
            throw y;
        }
        else
        {
            cout<<"The Division is "<<x/y<<endl;
        }
    }
    catch(double)
    {
        cout<<"Exception First is caught "<<endl;
        throw;
    }
}
int main()
{
    try
    {
        division(35.6,21.3);
        division(21.5,0.0);
    }
    catch(double-
    {
        cout<<"Exception double is caught "<<endl;
    }
    cout<<"End of main()"<<endl;
    return 0;
}
