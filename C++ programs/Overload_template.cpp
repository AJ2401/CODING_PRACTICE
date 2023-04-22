#include<iostream>
#include<string>
using namespace std;
template<class T>
void Func(T x)
{
    cout<<" The value is = "<<x<<endl;
}
void Func(int y)
{
    cout<<" The Integer value is ="<<y<<endl;
}
int main()
{
    Func(125);
    Func('c');
    Func("hey");
    Func(12.356);
return 0;
}
