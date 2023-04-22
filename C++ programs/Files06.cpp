#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
class A
{
    char Name[10];
    int Code;
    double Cost;
public:
    void readfunc(void);
    void writefunc(void);
};
void A::readfunc(void)
{
    cout<<"\nEnter your Name\n";
    cin>>Name;
    cout<<"\nEnter the Code of Stock\n";
    cin>>Code;
    cout<<"\nEnter your Stock Cost\n";
    cin>>Cost;
    cout<<"\n\n";
}
void A::writefunc(void)
{
    cout<<setw(15)<<Name<<setiosflags(ios::right)<<setw(15)<<Code<<setprecision(4)<<setw(15)<<Cost<<endl;
}
int main()
{
    fstream O;
    A O1[3];
    O.open("Stock_market",ios::in|ios::out);
    cout<<"Details of Three Stocks are :"<<endl;
    for(int i=0; i<3; i++)
    {
        O1[i].readfunc();
        O.write((char*) &O1[i] ,sizeof(O1[i]));
    }
    O.seekg(0);
    for(int i=0; i<3; i++)
    {
        O.read((char*)&O1[i],sizeof(O1[i]));
        O1[i].writefunc();
    }
    O.close();
    return 0;
}
