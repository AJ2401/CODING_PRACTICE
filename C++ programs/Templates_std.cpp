#include<iostream>
#include<vector>
using namespace std;
void A(vector<int> &v)
{
    cout<<"The Contents Are "<<endl;
    for (int i=0;i<v.size();i++)
    {
      cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector <int> X;
    cout<<"The Intial Size of Vector :"<<X.size()<<endl;
    cout<<"Enter the 5 Values For a vector "<<endl;
    int a;
    for(int i=0;i<5;i++)
    {
        cin>>a;
        X.push_back(a);
    }
    cout<<"The Size after Adding 5 elements: "<<X.size()<<endl;
    A(X);
    cout<<"Inserting One Element at End"<<endl;
    X.push_back(9.8);
    cout<<"The Size after Adding 1 Element is :"<<X.size()<<endl;
    A(X);
    cout<<"Inserting One Element at the Middle "<<endl;
    vector<int>::iterator i=X.begin();
    X.insert(i,0);
    i=i+3;
    X.insert(i,8.2);
    cout<<"The Size After Inserting is :"<<X.size()<<endl;
    A(X);
    X.erase(X.begin()+3,X.begin()+5);
    cout<<"The Size after Deletion is : "<<X.size()<<endl;
    A(X);
 return 0;
}
