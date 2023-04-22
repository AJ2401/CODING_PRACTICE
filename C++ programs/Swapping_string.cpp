#include<iostream>
#include<string>
using namespace std;
int main()
{
    string S1="Hello World";
    string S2="Hey World";
    string S3="Namaste India";
   int X=S1.compare(S2);
   if(X==0)
     cout<<"Both String are Same"<<endl;
    if(X==1)
        cout<<"S1 is greater than S2"<<endl;
    if(X==-1)
        cout<<"S2 is greater than S1"<<endl;
    int a=S1.compare(0,2,S2,0,2);
    int b=S2.compare(0,2,S1,0,2);
    int c=S2.compare(0,2,S3,0,2);
    int d=S2.compare(S2.size()-1,1,S3,S3.size()-1,1);
    cout<<" a = "<<a<<endl<<" b = "<<b<<endl<<" c = "<<c<<endl<<" d = "<<d<<endl;
    cout<<"Before Swapping "<<endl<<"S1 ="<<S1<<"       "<<"S2 = "<<S2<<endl;
    S1.swap(S2);
    cout<<"After Swapping is "<<endl<<"S1 = "<<S1<<"       "<<"S2 = "<<S2<<endl;
    return 0;
}
