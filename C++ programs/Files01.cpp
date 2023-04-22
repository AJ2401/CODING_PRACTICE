#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int b,a,Multi;
    ofstream O("Files");
    cout<<"Enter the Number"<<endl;
    cin>>a;
    O<<a<<"\n";
    cout<<"Enter Second Number"<<endl;
    cin>>b;
    O<<b<<"\n";
    O.close();

    ifstream O1("Files");
    O1>>a;
    O1>>b;
    Multi=a*b;
    cout<<a<<"\t"<<b;
    cout<<"\nMultiplication is\t"<<Multi;
     O1.close();
     return 0;
}
