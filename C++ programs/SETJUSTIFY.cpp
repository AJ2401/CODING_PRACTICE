#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    cout.fill('*');
    cout.setf(ios::left,ios::adjustfield);
    cout.width(8);
    cout<<"NUMBERS";

    cout.fill('@');
    cout.setf(ios::right,ios::adjustfield);
    cout.width(29);
    cout<<"Values of Square roots"<<endl;

    cout.fill('#');
    cout.precision(5);
    cout.setf(ios::showpos);
    cout.setf(ios::showpoint);
    cout.setf(ios::fixed,ios::floatfield);

    for(int i=1; i<68; i++)
    {
        cout.width(8);
        cout.setf(ios::left,ios::adjustfield);
        cout<<i;

        cout.width(18);
        cout.setf(ios::right,ios::adjustfield);
        cout<<sqrt(i)<<endl;
    }

    cout.setf(ios::scientific,ios::floatfield);
    cout<<"Square root of 104 = "<<sqrt(104);

    return 0;
}
