#include<iostream>
using namespace std;
class item{
    int code;
    float price;
public:
     void get(int a,float b)
    {
        code=a;
        price=b;
    }

    void show(void)
    {
        cout<<"The Item code is "<<code<<endl<<"The price of this Item is "<<price<<endl;
    }

};
const int Size=3;
int main()
{
   // item *I=new item[size];
   item *p = new item[Size];
   item *d =p;
    int x;float y;
    for(int i=0;i<Size;i++)
    {
        cout<<"Enter the item code and price "<<endl;
        cin>>x>>y;
        p->get(x,y);
        p++;
    }
    for(int i=0;i<Size;i++)
    {
        p->show();
        p++;
    }
    return 0;
}
