#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    string s1("Hello");
    string s2="hey";
    //string s3;
    s=s1;
    cout<<"The First string is  =  "<<s<<endl;
    cin>>s;
    cout<<"The User input First String  = "<<s<<endl;
   string s3(s);
    cout<<"The third String with first  = "<<s3<<endl;
    cin>>s3;
    cout<<"The Third String user input is  =  "<<s3<<endl;
    s=s1+s2;
    cout<<"After concatinating We get (first String ) =  "<<s<<endl;
    return 0;

}
