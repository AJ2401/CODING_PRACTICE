#include<iostream>
using namespace std;
template<class T1,class T2>
void Func(T1 x,T2 y)
{
    cout<<"X is= "<<x<<endl<<"Y is= "<<y<<endl;
}
int main()
{
    Func(18564,'h');
    Func(8,"hey");
    return 0;
}
