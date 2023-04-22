#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,*p,**pt;
   // clscr();
    p=&a;
    pt=&p;
    cout<<"The address of a "<<p<<endl;
    cout<<"The address of pointer 1 is"<<pt<<endl;
    p+=10;
    cout<<"new address of a is"<<p<<endl;
    pt+=10;
    cout<<"the new address of pointer 1 is"<<pt<<endl;
    return 0;
}
