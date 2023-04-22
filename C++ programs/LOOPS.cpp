#include<iostream>
using namespace std;
void func(int m)
{
    int num=m;
    int a=num%10;
    int Sum=Sum+(a*a*a);
    num=num/10;
    if(m==Sum)
    {
        cout<<m<<",";
    }
}
int main()
{
    int i=1;
    cout<<"The Armstrong Numbers are "<<endl;
    while(i<500)
    {
        func(i);
        i++;
    }
    return 0;
}
