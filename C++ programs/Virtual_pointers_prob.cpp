#include<iostream>
#include<cstring>
using namespace std;
class Media
{
protected:
    char title[56];
    float price;
public:
    Media(char *S,float X)
    {
        strcpy(title,S);
        price=X;
    }
    virtual void display() {};
};
class Book:public Media
{
    int pages;
public:
    Book(char *S,float X,int p):Media(S,X)
    {
        pages=p;
    }
    void display();
};
class Tape:public Media
{
    float time;
public:
    Tape(char*S,float X,float T):Media(S,X)
    {
        time=T;
    }
    void display();
};
void Book::display()
{
    cout<<"Details of Book "<<endl;
    cout<<"Title : "<<title<<endl;
    cout<<"Price : "<<price<<endl;
    cout<<"Pages : "<<pages<<endl;
}
void Tape::display()
{
    cout<<"Details of Tape "<<endl;
    cout<<"Title : "<<title<<endl;
    cout<<"Price : "<<price<<endl;
    cout<<"Time: "<<time<<endl;
}
int main()
{
    char *title=new char[45];
    float time,price;
    int pages;
    cout<<"Enter the details of Book"<<endl;
    cout<<"Title of the Book ";
    cin>>title;
    cout<<"Price of the Book ";
    cin>>price;
    cout<<"Pages in the Book ";
    cin>>pages;
    Book B(title,price,pages);
    cout<<"Enter the details of Tape"<<endl;
    cout<<"Title of the Tape ";
    cin>>title;
    cout<<"Price of the Tape ";
    cin>>price;
    cout<<"Time period of the Tape ";
    cin>>time;
    Tape T(title,price,time);
    Media*arr[2];
    arr[0]=&B;
    arr[1]=&T;
    cout<<"Media Details are:"<<endl;
    //cout<<"Details of Book "<<endl;
    arr[0]->display();
    //cout<<"Details of Tape "<<endl;
    arr[1]->display();
    return 0;
}
