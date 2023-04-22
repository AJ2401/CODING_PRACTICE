#include<iostream>
using namespace std;
class Cat
{
public:
    int a;
    void show()
    {
        cout<<"\nHELLO "<<a;
    }
};
class Bat:public Cat
{
public:
    int b;
    void show()
    {
        cout<<"\nHEY "<<b;
    }
};
int main()
{
    Cat *cptr;
    Cat C;
    cptr=&C;
    cptr->a=132;
    cout<<"\nParent class"<<endl;
    C.show();
    Bat B;
    cptr=&B;
    //cptr->b=154;
    cout<<"\nChild class"<<endl;
   // B.show();
    Bat *bptr;a
    Bat D;
    bptr=&D;
    bptr->b=187;
    cout<<"NEW pointer Assign"<<endl;
    D.show();
    return 0;

}
