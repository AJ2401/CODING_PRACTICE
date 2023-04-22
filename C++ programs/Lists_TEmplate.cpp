#include<iostream>
#include<list>
#include<cstdlib>
using namespace std;
void Show(list<int> &l)
{
    list<int> :: iterator P;
    cout<<"The Contents are : "<<endl;
    for(P=l.begin();P!=l.end();++P)
    {
        cout<<*P<<" , ";
    }
    cout<<endl<<endl;
}
int main()
{
    list<int> X;
    list<int> X1(8);
    for(int i=0;i<6;i++)
    {
        X.push_back(rand());
    }
    list<int>::iterator p;
    for(p=X1.begin();p!=X1.end();++p)
    {
        *p=rand();
    }
    cout<<"List One is "<<endl;
    Show(X);
    cout<<"List Two is "<<endl;
    Show(X1);
    cout<<"After Inserting the List1 at Front and End"<<endl;
    X.push_front(0);
    X.push_back(12.2);
    Show(X);
    cout<<"After Inserting the List1 at Front and End"<<endl;
    X1.push_front(1);
    X1.push_back(4.2);
    Show(X1);
    //Removing What We did
    cout<<"After Removing the List1 at Front "<<endl;
    X.pop_front();
    Show(X);
    cout<<"After Removing the List1 at End"<<endl;
    X1.pop_back();
    Show(X1);

    list<int> ListA,ListB;
    ListA=X;
    ListB=X1;

    //merging the Lists
  X.merge(X1);
  cout<<"The MErge Unsorted List is :"<<endl;
  Show(X);
  // MY option of Sorting
  X.sort();
  cout<<"The Sorted List :"<<endl;
   Show(X);
  //Book Method of Sorting
  ListA.sort();
  ListB.sort();
  ListA.merge(ListB);
  cout<<"The Merged Sorted List(frm Book):"<<endl;
  Show(ListA);
  //Reversing of List
  X.reverse();
  cout<<"The Reversed List is:"<<endl;
  Show(X);
  return 0;
}
