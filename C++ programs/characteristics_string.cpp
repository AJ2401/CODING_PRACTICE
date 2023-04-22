#include<iostream>
#include<string>
using namespace std;
void show(string &s)
{
    cout<<"The Length of String = "<<s.length()<<endl;
    cout<<"The Size of String = "<<s.size()<<endl;
    cout<<"The capacity of String = "<<s.capacity()<<endl;
    cout<<"The Maximum size of String = "<<s.max_size()<<endl;
    cout<<"The String is Empty ?? = "<<(s.empty() ? "Yes":"No")<<endl<<endl<<endl;
}
int main()
{
    string S1;
    cout<<"Intial Status is "<<endl;
    show(S1);
    cout<<"Enter a String "<<endl;
    cin>>S1;
    cout<<"The Status After Adding "<<endl;
    show(S1);
    S1.resize(18);
    cout<<"Status After Resizing is "<<endl;
    show(S1);
    cout<<endl;
    return 0;
}
