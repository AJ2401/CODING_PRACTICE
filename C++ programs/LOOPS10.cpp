#include<iostream>
using namespace std;
int main()
{
    long int Num=100000;
    for(int i=0;i<10;i++)
    {
        int a=Num*0.1;
        Num=Num-a;
    }
    cout<<"The Population Before 10 Decades : "<<endl<<Num;
}
