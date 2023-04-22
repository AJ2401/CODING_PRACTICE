#include<iostream>s
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
    char String[18];
    cout<<"Enter your Name "<<endl;
    cin>>String;
    int len=strlen(String);
    fstream O;
    O.open("Files",ios::in|ios::out);
    for(int i=0;i<len;i++)
    {
        O.put(String[i]);
    }
    O.seekg(0);
    char ch;
    while(O)
    {
        O.get(ch);
        cout<<ch;
    }
    return 0;
}
