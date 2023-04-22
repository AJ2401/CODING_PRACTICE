#include<iostream>
#include<string>
using namespace std;
int main()
{
    string S1="String";
    string S2="Strang";
    string S3=S1+S2;
    cout<<"First String is "<<S1<<endl<<"Second String is "<<S2<<endl;
    if(S1!=S2)
     cout<<S1<<" is not equal to "<<S2<<endl;
     if(S1>S2)
        cout<<S1<<" S1 is greater than S2 "<<S2<<endl;
     else
        cout<<S2<<" S2 is greater than S1 "<<S1<<endl;
     if(S3==S1+S2)
        cout<<S3<<" S3 is Equal to S1+S2 "<<S1+S2<<endl;
     int x=S1.compare(S2);
     if(x==0)
        cout<<"Both Strings Are equal"<<endl;
     if(x==1)
        cout<<"S1 is greater than S2"<<endl;
     if(x==-1)
        cout<<"S2 is greater than S1 "<<endl;
    return 0;
}
