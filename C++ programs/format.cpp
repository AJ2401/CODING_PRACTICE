#include<iostream>
using namespace std;
int main()
{
    int Item[5]={101,104,100,105,204};
    float Price[5]={123.2,54.21,15.3,42.63,89.0};
    cout.width(6);
    cout<<"Items";
    cout.width(12);
    cout<<"Price";
    cout.width(18);
    cout<<"Total Value"<<endl;
    float sum=0.0;
    for(int i=0;i<5;i++)
    {
        cout.width(8);
        cout<<Item[i];
        cout.width(12);
        cout<<Price[i];
        float Value =Item[i]*Price[i];
        cout.width(13);
        cout<<Value<<endl;
        sum=sum+Value;
    }
    cout<<"\n **Total **";
    cout.width(19);
    cout<<"= "<<sum<<endl;
    return 0;
}
