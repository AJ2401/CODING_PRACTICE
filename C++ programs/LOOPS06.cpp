#include<iostream>
using namespace std;
int main()
{
    int y,i;
    float x;

    for(y=1,x=5.5;y<=6 && x<=12.5;y++,x-=0.5)
    {
       i=2+(y+0.5*x);
       cout<<"The intelligence at "<<y<<" is "<<i<<" units "<<endl;
    }
}
