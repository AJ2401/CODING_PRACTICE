#include<iostream>
using namespace std;
class A
{
public:
    void display()
    {
        cout<<"Parent class Display"<<endl;
    }
    virtual void Show()
    {
        cout<<"Parent class using virtual keyword show"<<endl;
    }
};
class B:public A
{
    public:
    void display()
    {
        cout<<"Child class Display with other name of function "<<endl;
    }
    void Show()
    {
        cout<<"Child class Show function"<<endl;
    }
};
int main()
{
    A X;
    B Y;
    A *ptr;
    ptr=&X;
    cout<<"Parent class"<<endl;
    ptr->display();
    ptr->Show();
    cout<<"child class"<<endl;
    Y.display();
    Y.Show();
    return 0;
}
