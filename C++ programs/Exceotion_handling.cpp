#include<iostream>
using namespace std;
void operations(int x) throw(int,double)
{
    if(x==1)
    {
        throw 1.23;
    }
    else if(x==0)
    {
        throw 'A';
    }
    else if(x==-1)
    {
        throw 5;

    }
}
int main()
{
    int a;
    cout<<"Provide an integer "<<endl;
    try{
    //for(int i=0;i<3;i++)

    cin>>a;
    operations(a);

    }
    catch(char c)
    {
        cout<<"The Exception here is character type "<<endl;
    }
    catch(double D)
    {
        cout<<"The Exception here is Double type "<<endl;
    }
    catch(int X)
    {
        cout<<"The Exception here is Integer type "<<endl;
    }
    cout<<"End of main()"<<endl;
    return 0;
}
