#include<iostream>
#include<string>
using namespace std;
int main()
{
    string S1="Hello";
    string S2("Hey");
    cout<<"First String is "<<S1<<endl;
    cout<<"String Second is "<<S2<<endl;
    S1.insert(3,S2);
    cout<<"After inserting in String One "<<S1<<endl;
    S1.erase(3,3);
     cout<<"After Removing the String One is "<<S1<<endl;
     S2.replace(1,2,S1);
     cout<<"After Replacing The string two is "<<S2<<endl;
    return 0;
}
