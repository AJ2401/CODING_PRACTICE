#include<iostream>
#include<string>
using namespace std;
int main()
{
    string S("One Two Three Four Five");
    for(int i=0;i<S.length();i++)
    {
        cout<<S.at(i);
    }
    cout<<endl;
    for(int j=0;j<S.length();j++)
    {
        cout<<S[j];
    }
    cout<<endl;
    int X=S.find("Three");
    cout<<"The Position of Three is "<<X<<endl;
    int X1=S.find('T');
    cout<<"The position of 'T' is "<<X1<<endl;
    int X2=S.find_first_of('e');
    cout<<"The First Occurance of 'e' is "<<X2<<endl;
    int X3=S.find_last_of('F');
    cout<<"The Last Occurance of 'F' is "<<X3<<endl;
    cout<<"Retriving Substring "<<S.substr(X,5);
    return 0;
    }
