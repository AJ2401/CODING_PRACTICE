#include<iostream>
using namespace std;
void Func(int*a,int*b,int*c)
{
    int temp,tempo;
    temp=*a;
    *a=*b;
    *b=temp;

    tempo=*a;
    *a=*c;
    *c=tempo;
    cout<<*a<<"  "<<*b<<"  "<<*c<<"  ";
}
int main()
{
    int x,y,z;
    cout<<" Enter three numbers :"<<endl;
    cin>>x>>y>>z;
    cout<<"The Order is Shifted by Right: "<<endl;
    Func(&x,&y,&z);

}
