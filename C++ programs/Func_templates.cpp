#include<iostream>
using namespace std;
template<class T>
void Swap(T&X,T&Y)
{
    T tempo= X;
    X=Y;
    Y=tempo;
}
void Show(int n,int m,float x,float y)
{
    cout<<"Before Swapping two Integers "<<n<<"  "<<m<<endl;
    Swap(n,m);
    cout<<"After Swapping two Integers "<<n<<"  "<<m<<endl;

    cout<<"Before Swapping two float "<<x<<"  "<<y<<endl;
    Swap(x,y);
    cout<<"After Swapping two float "<<x<<"  "<<y<<endl;
}
int main()
{
     Show(10,20,22.3,12.4);
    return 0;
}
