#include<iostream>
#include<map>
#include<string>
using namespace std;
typedef map<string,int> Ph;
int main()
{
    string Name;
    int number;
    Ph Phone;
    cout<<"Enter the Name and Phone Number "<<endl;
    for(int i=0;i<3;i++)
    {
        cin>>Name;
        cin>>number;
        Phone[Name]=number;
    }
    Phone["john"]=2006;
    Phone.insert(pair<string,int>("jeeny",2007));
    int w=Phone.size();
    cout<<"The Size of the Map "<<w<<endl;
    cout<<"List of Telephone Numbers "<<endl;
    Ph::iterator x;
    for(x=Phone.begin(); x!=Phone.end() ;x++)
    {
        cout<<(*x).first<<"  "<<(*x).second<<endl;
    }
    cout<<"Enter the Name :"<<endl;
    cin>>Name;
    number=Phone[Name];
    cout<<"   "<<number;
    return 0;
}
